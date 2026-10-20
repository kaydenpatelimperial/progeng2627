#include <iostream>

int main(){
    int n,sum;

    sum = 0;
    std::cout << "enter a number: " << std::endl;
    std::cin >> n;

    while(n != 0){
        sum += n;
        std::cout << "the sum so far is: " << sum << std::endl << "enter a number: " << std::endl;
        std::cin >> n;
    }
}