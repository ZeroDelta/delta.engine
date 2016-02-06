//
// zero.delta 2016
//

#pragma once

#include <memory>
#include <vector>

#include "Entity.hpp"
#include "util/FreeList.hpp"

namespace delta {
    class EntityManager {
    private:

        FreeList<Entity> entities;

    public:



    }
}//delta::
