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

#include "Component.hpp"



namespace delta{

    class Entity{

    public:
        ~Entity();

        //void addComponent(Component& component);

    private:

        unsigned uid;
        std::vector<unsigned> components;

    };


} //delta
