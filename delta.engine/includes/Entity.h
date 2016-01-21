//
//  Entity.h
//  DeltaEngine
//
//  Created by ZeroSwordsMaster on 16/1/16.
//  Copyright (c) 2016 zerodelta. All rights reserved.
//
#pragma once


#include <map>
#include <string>
#include <typeindex>
#include <memory>

#include "Component.h"



namespace delta{
    
    class Entity{
        
    public:
        ~Entity();
        
        template<typename T, typename... TArgs>
        T& addComponent(TArgs&&... mArgs){
            
                //Preallocate space of a component
            auto component(new T(*std::forward<TArgs>(mArgs)...));
            
                //Set component's parent entity to this instance
                //component->entity = this;
            
                //Wrap the provided pointer in a unique ptr because memory allocation is for #coolkids
            std::unique_ptr<components::Component> uniquePtr{component};
            
                //Move uniquePtr into components area variadically bc direct construction without needing a temporary value is also for  cool kids
            components[std::type_index(typeid(T))] = std::move(uniquePtr);
            
            return *component;
            
        }
        
        template <typename T>
        T* get() const{
            auto iter = components.find(std::type_index(typeid(T)));
            
            if (iter != components.end())
                return dynamic_cast<T*>(iter->second.get());
            else
                return nullptr;
        }
        
        
    private:
        std::string type;
        std::map<std::type_index, std::unique_ptr<components::Component>> components;
        
        
    };
    
    
} //delta
