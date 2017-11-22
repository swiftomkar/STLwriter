//
// Created by Omkar Desai on 11/12/2017.
//
/* functions:
 * 1) makes a cube: cube(x,y,z,side);
 * 2) makes a cylinder: cylinder(x,y,z,r,h,facets);
 * 3) writes the output from cube and cylinder constructors to a STL file
*/
#include "CAD.h"
std::vector<std::vector<int>> points;
//std::vector<std::vector<int>> cyl;
std::ofstream stl("cube.stl");

Shape::Shape(double x, double y, double z):x(x),y(y),z(z){}
/*
Cylinder::Cylinder(double x, double y, double z, double r, double h, int facets):Shape(x,y,z),r(r),h(h),facets(facets) {
    //write algo to make a cylinder
    cyl.push_back({x,y,z});

    cyl.push_back({x,y+r,z});
    cyl.push_back({x+r,y+r,z});
    cyl.push_back({x+r,y,z});

    cyl.push_back({x+r,-(y+r),z});
    cyl.push_back({x,-y+r,z});

    cyl.push_back({-(x+r),-(y+r),z});
    cyl.push_back({-(x+r),y,z});

    cyl.push_back({x+r,-(y+r),z});

    //adding height
    cyl.push_back({x,y,z+h});

    cyl.push_back({x,y+r,z+h});
    cyl.push_back({x+r,y+r,z+h});
    cyl.push_back({x+r,y,z+h});

    cyl.push_back({x+r,-(y+r),z+h});
    cyl.push_back({x,-(y+r),z+h});

    cyl.push_back({-(x+r),-(y+r),z+h});
    cyl.push_back({-(x+r),y,z+h});

    cyl.push_back({x+r,-(y+r),z+h});
    std::cout<< "points for cyl: ";
    for(auto s: cyl)
        std::cout<<s[0]<<" "<<s[1]<<" "<<s[2]<<'\n';

}
*/
void Cylinder::vir(){}
Cube::Cube(double x, double y, double z, double size) : Shape(x,y,z),size(size) {
    //write algo to make a cube

    points.push_back({x,y,z});
    points.push_back({x+size,y,z});

    points.push_back({x,y+size,z});
    points.push_back({x+size,y+size,z});

    points.push_back({x,y,z+size});
    points.push_back({x+size,y,z+size});

    points.push_back({x,y+size,z+size});
    points.push_back({x+size,y+size,z+size});

    for(auto s: points)
        std::cout<<s[0]<<" "<<s[1]<<" "<<s[2]<<'\n';

}
void Cube::vir(){}
SCAD::SCAD(){}
void SCAD::add(Shape* a){
    shapes.push_back(a);
}

void SCAD::write(double first, double second, double third){
    stl<<"\tfacet normal 0 0 0\n";
    stl<<"\t\touter loop\n";
    stl<<"\t\t\tvertex"<<" "<< points[first][0]<<" "<<points[first][1]<<" "<<points[first][2]<<'\n';
    stl<<"\t\t\tvertex"<<" "<< points[second][0]<<" "<<points[second][1]<<" "<<points[second][2]<<'\n';
    stl<<"\t\t\tvertex"<<" "<< points[third][0]<<" "<<points[third][1]<<" "<<points[third][2]<<'\n';
    stl<<"\t\tendloop"<<'\n';
    stl<<"\tendfacet\n";
}
/*
void SCAD::writec(double first, double second, double third){
    stl<<"\tfacet normal 0 0 0\n";
    stl<<"\t\touter loop\n";
    stl<<"\t\t\tvertex"<<" "<< cyl[first][0]<<" "<<cyl[first][1]<<" "<<cyl[first][2]<<'\n';
    stl<<"\t\t\tvertex"<<" "<< cyl[second][0]<<" "<<cyl[second][1]<<" "<<cyl[second][2]<<'\n';
    stl<<"\t\t\tvertex"<<" "<< cyl[third][0]<<" "<<cyl[third][1]<<" "<<cyl[third][2]<<'\n';
    stl<<"\t\tendloop"<<'\n';
    stl<<"\tendfacet\n";
}
*/
void SCAD::CubeGen(){
    write(0,1,2);
    write(1,2,3);
    write(4,5,6);
    write(5,6,7);
    write(0,2,4);
    write(2,4,6);
    write(2,3,6);
    write(3,6,7);
    write(1,3,5);
    write(3,5,7);
    write(0,1,4);
    write(1,4,5);
}
/*
void SCAD::Cylgen(){
    writec(0,1,2);
    writec(0,2,3);
    writec(0,3,4);
    writec(0,4,5);
    writec(0,5,6);
    writec(0,6,7);
    writec(0,7,8);
    writec(0,8,1);

    writec(9,10,11);
    writec(9,11,12);
    writec(9,12,13);
    writec(9,13,14);
    writec(9,14,15);
    writec(9,15,16);
    writec(9,16,17);
    writec(9,17,10);


    //rects
    writec(15,6,14);
    writec(14,5,6);

    writec(14,5,13);
    writec(13,4,14);

    writec(13,4,3);
    writec(12,3,13);

    writec(12,3,2);
    writec(12,11,2);

    writec(1,10,11);
    writec(11,2,1);

    writec(10,1,8);
    writec(17,8,1);

    writec(17,8,7);
    writec(17,16,7);

    writec(16,7,15);
    writec(15,6,7);

}
*/

SCAD::~SCAD(){
    for(int i=0;i<shapes.size();i++)
        delete shapes[i];
}
