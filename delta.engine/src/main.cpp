//
//  main.cpp
//  DeltaEngine
//
//  Created by ZeroSwordsMaster on 25/11/15.
//  Copyright (c) 2015 zerodelta. All rights reserved.
//

#include <iostream>

#include "Entity.h"

#include "Component.h"




int main(int argc, const char * argv[]) {
    // This is really messy for testing purposes ignore pls
    
    delta::Entity entity;
    
    delta::components::Position position;
    position.x = 10;
    position.y = 10;
    position.z = 10;
    
    entity.addComponent<delta::components::Position>(new delta::components::Position());
    
    
    
    
    
    std::cout << "X: " << entity.get<delta::components::Position>()->x << std::endl;
    
    entity.get<delta::components::Position>()->x = 25;
    
    std::cout << "X: " << entity.get<delta::components::Position>()->x << std::endl;
    
    std::cout << "Hello, World!\n";
    return 0;
}
