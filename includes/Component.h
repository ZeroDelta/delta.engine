//
//  Component.h
//  DeltaEngine
//
//  Created by ZeroSwordsMaster on 16/1/16.
//  Copyright (c) 2016 zerodelta. All rights reserved.
//

#pragma once


#include "Entity.h"

namespace delta{ namespace components {
    
    class Entity;
    
    struct Component{
        
        Entity* entity{nullptr};
        
            //virtual void update(float FT) {}
        
        virtual ~Component() {}
    };
    
    struct Position : Component{
        
        int x{0};
        int y{0};
        int z{0};
    };

    
}}//delta::components
