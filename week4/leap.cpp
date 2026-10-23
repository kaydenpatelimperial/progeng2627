#include <iostream>

// we can define a function that returns a bool

bool leap_year(int year){
    bool ly;

    // TODO: check whether the year is a leap year or not
    // store result in variable ly

    if(year%400==0) {
        ly = true;
    } else if (year%100==0) {
        ly=false;
    } else if (year%4==0) {
        ly=true;
    } else {
        ly=false;
    }

    return ly;
    // we *do not print* anything in the function
}

int main(){

    int input_year;

    std::cout << (leap_year(1600) == true) << std::endl;
    std::cout << (leap_year(2000) == true) << std::endl;

    std::cout << (leap_year(1700) == false) << std::endl;
    std::cout << (leap_year(1800) == false) << std::endl;
    std::cout << (leap_year(1900) == false) << std::endl;


}