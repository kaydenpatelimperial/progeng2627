#include <iostream>
#include <cmath>

double maxofthree(double a, double b, double c){
    double result;

    if (a>b && a>c) {
        result = a;
    } else if (b>a && b>c) {
        result=b;
    } else {
        result=c;
    }

    return result;
    

    
}

int main(){

    double a1,b1,c1;

    std::cout << "enter first number:" << std:: endl;
    std::cin >> a1;
    std::cout << "enter second number:" << std:: endl;
    std::cin >> b1;
    std::cout << "enter third number:" << std:: endl;
    std::cin >> c1;

    std::cout << "the largest of those three numbers is " << maxofthree(a1,b1,c1);


}