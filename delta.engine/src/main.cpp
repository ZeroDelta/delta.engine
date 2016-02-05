//
//  main.cpp
//  DeltaEngine
//
//  Created by ZeroSwordsMaster on 25/11/15.

//this is temporary.  Eventually, this will be put into its own separate folder of
//examples.


#include <iostream>

//#include "Entity.hpp"
//#include "Component.hpp"

#include "util/FreeList.hpp"
#include "Entity.hpp"

typedef unsigned Handle;

int main(int argc, const char * argv[]) {
    // This is really messy for testing purposes ignore pls

    delta::FreeList<delta::Entity> integers = delta::FreeList<delta::Entity>();
    Handle temp = integers.add();
    Handle next = integers.add();


    std::cout << integers.get(temp).handle << std::endl;
    std::cout << integers.get(next).handle << std::endl;
    return 0;
}
