//
// zero.delta 2016
//

#pragma once

#include <memory>
#include <vector>

#include "FreeList.hpp"
#include "Component.hpp"

namespace delta {
    
    class ComponentManager {
    private:

        FreeList<Component> components;

    public:



    }
}//delta::
