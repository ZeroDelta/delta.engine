#include "FreeList.hpp"

namespace delta{

    FreeList::FreeList(unsigned max){

        size = 0;
        maxSize = max;

        for(unsigned i = 0; i < maxEntries; ++i){
            indices[i].handle = i;
            indices[i].next = i + 1;
        }

        dequeue = 0;
        enqueue = maxEntries - 1;

    }

    T& FreeList::get(Handle handle) {

        return entries[indices[handle & INDEX_MASK].index];

    }
    T& FreeList::get(int index) {

        return entries[indices[index].index];

    }

    bool FreeList::has(Handle handle){
        Index &in = indices[handle & INDEX_MASK];
        return in.handle == handle && in.index != maxSize;
    }

    Handle FreeList::add(){
        Index &in = indices[dequeue];

        dequeue = in.next;
        in.handle += ID_ADD;
        in.index += size++;

        T &object = entries[in.index];

        object.handle = in.handle;
        return object.handle;

    }

    void FreeList::remove (Handle handle){
        Index &in = indices[handle & INDEX_MASK];

        T &object = entrie[in.index];
        object = entries[--size];
        indices[object.handle & INDEX_MASK].index = in.index;

        in.index = maxSize;

        indices[enqueue].next = handle & INDEX_MASK;
        enqueue = handle & INDEX_MASK;

    }
}
