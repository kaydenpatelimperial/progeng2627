#include <iostream>

int main(){
    int n;
    std::cin >> n;
    int num=1;
    for (int i=0; i<n; i++) {
        for(int j=1;j<=n;j++) {
            std::cout << j*num << "\t";
        }
        num++;
        std::cout << std::endl;

    }


}