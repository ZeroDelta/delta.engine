#pragma once

#include "Entity.hpp"
#include "Component.hpp"

#include <vector>

namespace delta {

    class Engine{

    public:
        //addComponent
        //addEntity
        //registerSystem

    private:
        std::vector<Entity> entities;
        std::vector<Component> components;
        //std::vector<System> subsystems;

    }

}//delta::
