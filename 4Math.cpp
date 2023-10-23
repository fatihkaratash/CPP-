#include <iostream>
#include <cmath>

int main(){

    double x = 3.14;
    double y = 3;
    double z;

    //z = std::max(x,y);
    //z = std::min(x,y);
    //z = pow(2,4); //2 üssü 4
    //z = sqrt(9); //karekök -square root
    //z = abs(-3); // mutlak değer, absolute
    //z = round(x); //yuvarlama
    //z = ceil(x); //tavana yuvarlama
    //z = floor(x); //tabana yuvarlama

    // HİPOTENUS BUL

    double a;
    double b;
    double c;

    std::cout << "Enter a: \n"; 
    std::cin >> a;

    std::cout << "Enter b: \n";
    std::cin >> b;

    a = pow(a,2);
    b = pow(b,2);
    c = sqrt(a+b); //pow(a,2) yi içeriye de yazabilirsin

    std::cout << "Hipotenus: " << c;


    return 0;
}