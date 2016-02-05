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

    typedef unsigned Handle;

    struct Entity{

        Entity();

        Handle handle;

    };


} //delta
