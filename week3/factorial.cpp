#include <iostream>

int main(){
    int n;
    int total = 1;
    std::cin >> n;

    if (n==0) {
        std::cout << 1;
    }
    else {

        for(int i = 1; i <= n; i++){
            total*=i;

        }

        std::cout << total;

    }

}