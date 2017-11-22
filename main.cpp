#include <iostream>
#include "CAD.h"
#include "transformations.h"
#include "world.h"

using namespace std;
//https://www.stratasysdirect.com/resources/how-to-prepare-stl-files/
//https://www.viewstl.com/
int main() {
    SCAD c;
    c.add(new Cube(12,15,0,15));
//    c.add(new Cylinder(0,0,0,    5, 5, 10));
    c.CubeGen();
//    c.Cylgen();

    world w;
    transformations doublex;
    doublex.scale(2,1,1);
    w.add(doublex, new Cube(0,0,0,10));
}