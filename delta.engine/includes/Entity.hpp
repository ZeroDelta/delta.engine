//
//  Entity.h
//  DeltaEngine
//
//  Created by ZeroSwordsMaster on 16/1/16.

#pragma once


#include <vector>
#include <string>
#include <typeindex>
#include <memory>

#include "Handle.hpp"
#include "Component.hpp"



namespace delta{

    class Entity{

    public:
        ~Entity();

        //void addComponent(Component& component);

    private:

        unsigned uid;
        std::vector<Handle> components;

    };


} //delta
