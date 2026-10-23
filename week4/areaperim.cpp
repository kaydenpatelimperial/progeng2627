#include <iostream>

// this is the only different line:
void areaperimetersolve(double length, double width, double& area, double& perimeter){

    area = length * width;
    perimeter = 2*(length+width);

}

int main(){
    double l,w,a,p;

    std::cout <<"enter the length? " << std::endl; 
    std::cin >> l;

    std::cout <<"enter the width? " << std::endl; 
    std:: cin >> w;

    areaperimetersolve(l,w,a,p);

    std::cout <<"area: " << a << std::endl; 
    std::cout <<"perimeter: " << p << std::endl;




}