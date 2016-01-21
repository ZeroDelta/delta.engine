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
#include <cstdint>

#include "Component.hpp"



namespace delta{

    class Entity{

    public:
        ~Entity();

        //void addComponent(Component& component);

    private:
        std::uint32_t uid;
        std::vector<std::uint32_t> uid;

    };


} //delta
