# STLwriter
Wikipedia: STL (an abbreviation of "stereolithography") is a file format native to the stereolithography CAD software created by 3D Systems.
#### 1. This project was aimed at generating 3D object files in the STL format which is compact & portable.
#### 2. These files can be viewed on an STL viewer like: [this](https://www.viewstl.com/)
#### 3. [ref](https://www.stratasysdirect.com/resources/how-to-prepare-stl-files/)

##### Structure:
1. CAD.h / CAD.cpp
* Class Shape: This is a pure virtual class that holds various shapes like Cube, Cylinder and more which are inherited from the shape Class.
* Class Cube: an object of this type takes params to make a STL cube.
* Class Cylinder: an object of this type takes params to make a STL cylinder. 
* Class SCAD: Takes a Shape object as an input and generates the STL file with the Shape object params that were passed during object instantiation.

2. vector.h /vector.cpp
This is the geometric vector and thus provides methods you would usually expect to do with a vector (in geometry)
```
* a.dot(b);
* a.dist(b);
* a.scalar_mul(b);
* a.subVec(b)
* a.addVec(b);
```
here a and b both are of type vector;
can be created like this:
```
Vec3d(1.0,2.0,3.0);
```
