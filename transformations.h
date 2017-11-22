//
// Created by Omkar Desai on 11/20/2017.
//

#pragma once

#include "CAD.h"
#include <cmath>
class transformations {
private:
    int a,b,c,d;
    int e,f,g,h;
    int i,j,k,m;
public:
    transformations();
    void apply(double x,double y,double z);
    void apply(Shape& s);
    void scale(double x,double y,double z);
    void translate(double x,double y,double z);
    void rotateX(double t);
    void rotateY(double t);
    void rotateZ(double t);


};


