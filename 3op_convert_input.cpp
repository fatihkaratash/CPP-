#include <iostream>


int main(){

    /*Arithmetic's
    int students = 20;

    students+=1; //Students = Students + 1;
    students-=1;
    students*=students;
    students/=6;

    int remainder = students % 5; //modulus

    std::cout << remainder;
    
-------------------------------------------

    // TYPE CONVERSION
    // implicit = auto , explicit = precede value new data type
    double x = (int) 3.14;

    std::cout << (int) x;
-----------------------------------------------------------------------   
*/
    //INPUT
    using namespace std;
    string name;
    int age;

    cout << "TAM Adin ne?: ";
    getline(cin , name); //line'ı alır, BOŞLUK hatasını çözer
    // ws = whitespace'leri çözer

    cout << "Whata b 's your age?: ";
    cin >> age;

    cout << "You are " << age <<" years old" << endl;
    cout << "Hello " << name;
 


    return 0;
}