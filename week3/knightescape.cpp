#include <iostream>

int main(){
    int x_c,y_c; // current coordinates of kngiht
    int x_n,y_n; //new coordinates
    int flag = 1;

    //get intial position
    std::cout << "xcord?: ";
    std::cin >> x_c;
    std::cout << "ycord?: ";
    std::cin >> y_c;
    // we want to keep looping whilst (x,y) is not equal to any of the escapesquarz
    //(x!=1 && y!=1) || (x!=8 && y!=1) || (x!=8 && y!=8) || (x!=1 && y!=8)
    while (flag == 1) {


        //get new position
        std::cout << "new xcord?: ";
        std::cin >> x_n;
        std::cout << "new ycord?: ";
        std::cin >> y_n;
        
        if (x_n > 8 || x_n < 1 || y_n > 8 || y_n < 1) {
            std::cout << "Invalid move: out of board" << std::endl;
        } else if (abs(x_n-x_c)==2 && abs(y_n-y_c)==1) {
            x_c = x_n;
            y_c = y_n;
            std::cout << "Valid move" << std::endl;
        } else if (abs(x_n-x_c)==1 && abs(y_n-y_c)==2) {
            x_c = x_n;
            y_c = y_n;
            std::cout << "Valid move" << std::endl;
        } else {
            std::cout << "Invalid move: knight cannot move there" << std::endl;
        }


        if ((x_c==1 && y_c==1)||(x_c==8 && y_c==1) || (x_c==8 && y_c==8) || (x_c==1 && y_c==8)) {
            std::cout << "You escaped!!";
            flag=0;
            

        }




    }



}
