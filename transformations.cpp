//
// Created by Omkar Desai on 11/20/2017.
//

#include "transformations.h"
transformations::transformations(){
    a=1,b=0,c=0,d=0;
    e=0,f=1,g=0,h=0;
    i=0,j=0,k=1,m=0;
}
void transformations:: apply(double x,double y,double z){
    double temp_x,temp_y,temp_z;
    temp_x=a*x+b*y+c*z+d;
    temp_y=e*x+f*y+g*z+h;
    temp_z=i*x+j*y+k*z+m;
    x=temp_x;
    y=temp_y;
    z=temp_z;
}
void transformations:: apply(Shape& s){
    for(auto s: points){
        apply(s[0],s[1],s[2]);
    }

}
void transformations::scale(double x, double y, double z) {
    a=x;
    f=y;
    k=z;
}
void transformations::translate(double x, double y, double z) {
    d=x;
    h=y;
    m=z;
}
void transformations::rotateX(double t){}

void transformations::rotateY(double t){
    a=cos(t);                   c=sin(t);
                    f=1;
    i=(-sin(t));                k=cos(t);
}

void transformations::rotateZ(double t){
    a=cos(t);       b=sin(t);
    e=(-sin(t));    f=cos(t);
                                k=1;
}


