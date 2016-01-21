//
//  main.cpp
//  DeltaEngine
//
//  Created by ZeroSwordsMaster on 25/11/15.

//this is temporary.  Eventually, this will be put into its own separate folder of
//examples.


#include <iostream>

#include "Entity.hpp"
#include "Component.hpp"




int main(int argc, const char * argv[]) {
    // This is really messy for testing purposes ignore pls

    delta::Entity entity;

    delta::Position position;
    position.x = 10;
    position.y = 10;
    position.z = 10;

    entity.addComponent<delta::Position>(new delta::Position());





    std::cout << "X: " << entity.get<delta::Position>()->x << std::endl;

    entity.get<delta::Position>()->x = 25;

    std::cout << "X: " << entity.get<delta::Position>()->x << std::endl;

    std::cout << "Hello, World!\n";
    return 0;
}
