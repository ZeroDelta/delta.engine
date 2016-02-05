#pragma once


#define INDEX_MASK 0xffff
#define ID_ADD 0x10000
#define MAX_SIZE 64*1024

namespace delta{

    typedef unsigned Handle;

    struct Index{
        Handle handle;
        unsigned short index;
        unsigned short next;
    };

    template<class T>
    struct FreeList {

        unsigned size;
        unsigned short enqueue;
        unsigned short dequeue;
        T entries[MAX_SIZE];
        Index indices[MAX_SIZE];


        FreeList(){

            size = 0;

            for(unsigned i = 0; i < MAX_SIZE; ++i){
                indices[i].handle = i;
                indices[i].next = i + 1;
            }

            dequeue = 0;
            enqueue = MAX_SIZE - 1;

        }

        T& get(Handle handle){

            return entries[indices[handle & INDEX_MASK].index];

        }


        T& operator [](Handle handle){ return this->get(handle); }

        //bool has(Handle handle);

        Handle add(){
            Index &in = indices[dequeue];

            dequeue = in.next;
            in.handle += ID_ADD;
            in.index += size++;

            T &object = entries[in.index];

            object.handle = in.handle;
            return object.handle;

        }

        void remove(Handle handle){
            Index &in = indices[handle & INDEX_MASK];

            T &object = entries[in.index];
            object = entries[--size];
            indices[object.handle & INDEX_MASK].index = in.index;

            in.index = MAX_SIZE;

            indices[enqueue].next = handle & INDEX_MASK;
            enqueue = handle & INDEX_MASK;

        }


    };

}
