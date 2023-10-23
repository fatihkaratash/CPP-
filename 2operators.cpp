#include <iostream>

int main(){
    /*Ternary ?: = 
    // condition ? expression1 : expression2;

    int grade = 56;

    grade >=50 ? 
    std::cout << "Passed!" : 
    std::cout << "Failed!";

    bool hungry = true;

    hungry ? std::cout << "You are hungry \n" : std::cout << "Foold " << '\n' ;
    //2. kullanım
    std::cout << (hungry ? "hungry" : " full");*/

    /* && = True  -     !! = birinden biri true      -  ! = tersi 
    int temp;

    std::cout << "Enter: ";
    std::cin >>temp;

    if (temp > 0 && temp <30)
    {
        std::cout << "Good";
    }
    else{
        std::cout << "Bad";
    }*/

    //--------- Temperature -------------

    double temp;
    char unit;

    std::cout << "**** Temperature Conversion ******\n";
    std::cout << "F = Fahrenheit\n";
    std::cout << "C = Celcius\n";
    std::cout << "Choose units: ";
    std::cin >> unit;

    if(unit == 'F' || unit == 'f'){
        std::cout << "Enter the temperature in celcius: ";
        std::cin >> temp;

        temp = (1.8 * temp) + 32.0; //32.0
        std::cout << "Temp is : " << temp << "F\n";
    }else if( unit == 'C' || unit == 'c'){
        std::cout << "Enter the temperature in fahrenheit: ";
        std::cin >> temp;

        temp = (temp - 32) / 1.8;
        std::cout << "Temp is : " << temp << "C\n";
    }else {
        std::cout << "Please only use C or F";
    }


    std::cout << "**** ****** ******";
    


    return 0;
}