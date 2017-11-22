#include <iostream>
#include "CAD.h"
#include "vector.h"/*functions available:
                    1: a.dot(b);
                    2: a.dist(b);
                    3: a.scalar_mul(b);
                    4: a.subVec(b)
                    5: a.addVec(b);

                    here a and b both are of type vector;
                    can be created like this:
                    Vec3d(1.0,2.0,3.0);
                  */

using namespace std;
//https://www.stratasysdirect.com/resources/how-to-prepare-stl-files/
//https://www.viewstl.com/
int main() {
    SCAD c;
    c.add(new Cube(12,15,0,15));
    c.add(new Cylinder(100,0,0,    3, 10, 10));
    c.CubeGen("test.stl");
}