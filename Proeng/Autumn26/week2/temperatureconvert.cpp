#include <iostream>

int main() {
    double celcius, farenheit;

    std::cout << "What is the temperature in C?" << std::endl;
    std::cin >> celcius;

    farenheit = (celcius*1.8) + 32;

    std::cout << "It is " << farenheit << "F"<< std::endl;
}