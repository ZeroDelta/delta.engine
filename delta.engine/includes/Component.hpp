//
//  Component.h
//  DeltaEngine
//
//  Created by ZeroDelta on 16/1/16.


#pragma once

#include "Entity.hpp"

namespace delta{

    class Entity;

    struct Component{

            unsigned entity;

            unsigned uid;

            //virtual void update(float FT) {}

        virtual ~Component() {}
    };

    struct Position : Component{

        int x{0};
        int y{0};
        int z{0};
    };

}//delta::components
