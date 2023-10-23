#include <iostream>

int main (){
    // if : condition true = do something / false = don't do it

    /*int age;

    std::cout << "Type your age: " << '\n';
    std::cin >> age;

    if( age >=55){ //ÜSTE ALDIK çünkü ilk burayı okuyor
        std::cout << " You are too old! ";
    }
    else if (age >= 18){
        std::cout << "Welcome to the club!";
    }
    else if (age < 0){
        std::cout << "You haven't been born yet!";
    }
    else{
        std::cout << " You are not enough to enter! ";
    }----------------------------------------*/

    //Switches = else if alternatifi
    int month;
    //std::cout << "Enter the month (1-12): ";
    //std::cin >> month;

    switch (month)
    {
    case 1: //case 'A':
    std::cout << "It is january";
        break;
    case 2:
    std::cout << "It is Feb";
        break;
    case 3:
    std::cout << "It is March";
        break;
    case 4:
    std::cout << "It is April";
        break;
    case 5:
    std::cout << "It is May";
        break;
    case 6:
    std::cout << "It is june";
        break;
    
    default: //Switch harici sunulacak seçenek
    std::cout <<"Please only enter in only number (1-6)";
        break;
    }    

    char op;
    double num1;
    double num2;
    double result;

    std::cout << "------------CALCULATOR---------\n";
    std::cout << "Enter + - * / : ";
    std::cin >> op;

    std::cout << "Enter num1: \n";
    std::cin >> num1;

    std::cout << "Enter num2: \n";
    std::cin >> num2;

    switch(op){
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        default:
            std::cout << "That wasn't valid respond";
            break;
    }
    std::cout << "The result is: " << result << '\n';
    return 0;
}

    // '\n' = Karakter olarak algılanıyor, o yüzden tek tırnak
    // Java'daki gibi + değil << konuluyor aralara