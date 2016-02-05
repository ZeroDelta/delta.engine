#pragma once

#include "Handle.hpp"

#define INDEX_MASK 0xffff
#define ID_ADD 0x10000

namespace delta{

    struct Handle;

    struct Index{
        Handle handle;
        unsigned short index;
        unsigned short next;
    }

    template<class T>
    struct FreeList {

        unsigned size;
        unsigned maxSize;
        unsigned short enqueue;
        unsigned short dequeue;
        T entries;
        Index indices;


        FreeList(int maxEntries);

        T& get(Handle handle);
        T& get(int index);

        T& operator [](Handle handle){ return this->get(handle); }
        T& operator [](int index){ return this->get(index); }

        bool has(Handle handle);

        Handle add();
        void remove(Handle handle);


    }

}
