#include <iostream>

int main(){
    double lb = 1;
    double ub = 100; 
    int guess;
    int flag = 0;

    while (flag == 0) {

        guess = int((lb+ub)/2);

        std::string user_input;
        std::cout << "Is it higher or lower (or correct) than " << guess << "?" << std::endl;
        std::cin >> user_input;

        if (user_input == "higher") {
            lb = guess + 1;

        } else if (user_input=="lower") {
            ub = guess - 1 ;

        } else if (user_input=="correct")  {
            flag = 1;

        } else {
            std::cout << "Please enter higher, lower, or correct. No other things." << std::endl;
        }
        

    }

    std::cout << guess;


}
