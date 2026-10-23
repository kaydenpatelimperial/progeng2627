#include <iostream>
#include <cmath>

int main() {
    double x,n;
    std::cout << "what is the base of the exponent?";
    std::cin >> x;

    std::cout << "what is the power of the exponent?";
    std::cin >> n;

    std::cout << std::pow(x,n);

}
