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

    for(int i = 0; i < MAX_SIZE; i++){

        Handle temp = integers.add();

        std::cout << integers.get(temp).handle << std::endl;

    }

    std::cout << integers.get(0).handle << std::endl;

    std::cout << integers.get(MAX_SIZE - 1).handle << std::endl;

    /*delta::FreeList<delta::Entity> integers = delta::FreeList<delta::Entity>();
    Handle temp = integers.add();
    Handle next = integers.add();
    Handle del = integers.add();


    std::cout << integers.get(temp).handle << std::endl;
    std::cout << integers.get(next).handle << std::endl;
    std::cout << integers.get(del).handle << std::endl;

    std::cout << integers.size << std::endl;


    integers.get(temp).position = 1;

    std::cout << integers.get(temp).position << std::endl;

    integers.remove(integers.get(next).handle);

    std::cout << integers.get(temp).handle << std::endl;
    std::cout << integers.get(next).handle << std::endl;
    std::cout << integers.get(del).handle << std::endl;

    std::cout << integers.size << std::endl;

    std::cout << integers.has(next) << std::endl;*/


    return 0;
}
