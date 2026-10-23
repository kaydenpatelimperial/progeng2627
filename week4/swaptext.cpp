#include <iostream>

// this is the only different line:
void textswap(std::string& a, std::string& b){

    std::string tmp;
    tmp = a;
    a = b;
    b = tmp;

}

int main(){

    std::string s1, s2;

    std::cout << "please enter two separate strings:" << std::endl;
    std::cin >> s1 >> s2;

    std::cout << "you entered:" << std::endl;
    std::cout << "s1: " << s1 << std::endl;
    std::cout << "s2: " << s2 << std::endl;

    textswap(s1, s2);

    

    std::cout << "after swapping the strings:" << std::endl;
    std::cout << "s1: " << s1 << std::endl;
    std::cout << "s2: " << s2 << std::endl;

}