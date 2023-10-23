#include <iostream>

using namespace std;

int main(){

    string name;

    cout << "Enter your name: ";
    getline(cin, name); //boşluğu da alır

    if(name.length() > 10){ //lenght()
        cout << "You name can't be over 10 chars!";
    }
    else if(name.empty()){ //enter
        cout << "You didn't enter your name";
    }
    else{
        std::cout << "Welcome " << name;
    }

    // name.clear() = atanan değeri siler
    // name.append("++") = sonuna ekleme yapar
    // name.at(0) = index'e göre char'ı bulur
    // name.insert(0, "@") = index'E göre ekleme yapar
    // name.find('x') = istenen char'ı bulur
    // name.erase(0,3) = istenen indexleri siler == 0 dahil 3 dahil değil
    //
    return 0;
}