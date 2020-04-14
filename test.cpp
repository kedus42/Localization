#define PI 3.14159265
#include <iostream>
#include "Vector.h"
int main(){
    Vector<float> a(2.3, 3.2);
    //a.normalize();
    //a=a-a;
    //std::cout<<a[0]<<a[1];
    Vector<float> b;
    b.push_back(2);
    b.push_back(3);
    b.rotate(PI/2);
    std::cout<<b[0]<<" "<<b[1]<<std::endl;
    float c=a.dot(a,b);
    std::cout<<c<<std::endl;
    c=a.cross(a,b);
    std::cout<<c<<std::endl;
    std::cout<<b.size()<<std::endl;
    Vector<float> d(b);
    std::cout<<d[0]<<" "<<d[1]<<std::endl;
}