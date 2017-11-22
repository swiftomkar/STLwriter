//
// Created by Omkar Desai on 11/20/2017.
//

#pragma once


#include <vector>
#include "CAD.h"
#include "transformations.h"
class world {
private:
    std::vector<Shape*> shapes;
public:
    world();
    void add(transformations m, Shape* s);
};

