#include <iostream>

using namespace std;

int main(){
    string name;

    /*While : if doğru olduğu sürece devam eder.
    while(name.empty()){
        cout << "Enter your name: ";
        getline(cin, name);
    }

    cout << "Hello " << name;*/

    /*----------------
         DO-WHILE = While doğru olana kadar do'yu repeat
    int number;

    do{
        cout << "Enter positive num: ";
        cin >> number;
    }
    while(number < 0);

    cout << "The number is : " << number; */

    /*----------- 
          FOR LOOPS / i = index

    // Başlangıc , durum , artma/azalma
    for(int i = 0; i >= 0; i-=5 ){
       cout << i << '\n';
    }
     cout <<   "Happy new year!\n";

     //break = döngüyü kırar ,  continue = o blocku atlar

        if(i == 15){
            continue;
        }
        cout << i << '\n';
     }*/

    // NESTED LOOPS

       int rows;
       int columns;
       char symbol = '*';

       cout << "How many rows?: ";
       cin >> rows;

       cout << "How many columns?: ";
       cin >> columns;

    for(int i = 1; i <= rows; i++){
    
        for(int j = 1; j <= columns; j++){
            cout << symbol << ' ';
        }
         cout << endl;
    }

    return 0;
}