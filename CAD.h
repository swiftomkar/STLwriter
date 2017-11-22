//
// Created by Omkar Desai on 11/12/2017.
//
#include <vector>
#include <iostream>
#include <fstream>
#include "vector.h"

#pragma once
class Shape {
private:
    double x,y,z;
public:
    Shape(double x, double y, double z);

    virtual void vir()=0;
};

class Cylinder : public Shape{
private:
    double r, h;
    int facets;
public:
    Cylinder(double x, double y, double z, double r, double h, int facets);
    void vir();
};

class Cube: public Shape {
private:
    double size;

public:
    Cube(double x, double y, double z, double size);

    void vir();
};

class SCAD {
private:
    std::vector<Shape*> shapes;
public:
    SCAD();
    void add(Shape* a);
    void write(std::string a,double first, double second, double third);
    void CubeGen(std::string a);

    ~SCAD();
};