#include <iostream>

int main(){
    double l,w,p,a;
    
    std::cout << "What is the length of the rectangle?" << std::endl;
    std::cin  >> l;

    std::cout << "What is the width of the rectangle?" << std::endl;
    std::cin  >> w;

    p = 2*(l+w);
    a = l*w;

    std::cout << "Perimeter: " << p << std::endl;
    std::cout << "Area: " << a << std::endl;
}