
//
// Created by Omkar Desai on 11/20/2017.
//

#include "world.h"
world::world(){}
void world::add(transformations m, Shape* s){
    m.apply(*s);
    shapes.push_back(s);
}