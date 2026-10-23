#include <iostream>

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

void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2){
    // TODO: d1, m1, y1 are inputs 
    // corresponding to the date d1/m1/y1
    // d2, m2, y2 are outputs that the function must compute
    // corresponding to the date d2/m2/y2 
    // which is meant to be the day after d1/m1/y1


    if (d1==31 && m1==12) {
        d2=1;
        m2=1;
        y2 = y1+1;
    } else if (d1==28 && m1==2 && leap_year(y1)==true) {
        d2=1;
        m2=3;
        y2=y1;
    } else if (d1==30 && (m1==2 || m1==4 || m1==6 || m1==9 || m1==11)) {
        d2=1;
        m2=m1+1;
        y2=y1;
    } else if (d1==31 && (m1==1 || m1==3 || m1==5 || m1==7 || m1==8 || m1==10 || m1==12)) {
        d2=1;
        m2=m1+1;
        y2=y1;       
    } else {
        d2=d1+1;
        m2=m1;
        y2=y1;
    }

    // function leap_year is useful for this task

    // do not begin to write code straightaway
    // sketch some diagrams first like we did
    // for the leap year task

    // (this function should not print anything)

}

int main(){
    int d1,m1,y1,d2,m2,y2;

    std::cout << "Input the first date like day/month/year: ";
    std::cin >> d1 >> m1 >> y1;

    next_date(d1,m1,y1,d2,m2,y2);

    std::cout << "next day is: " << d2 << "/" << m2 << "/" << y2;
}