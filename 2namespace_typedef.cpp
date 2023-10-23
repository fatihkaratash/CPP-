#include <iostream>
#include <vector>

/*NAMESPACE'S
namespace first {
    int x = 4;
 }

 namespace second{
    int x = 7;
 }
    // std:: == standart namespace, tanımlı olması için gerekli **
    // BAŞTA using namespace std; couttan once yazmamak için. 
    // using namespace std veya string bu ikisinde çok özellik var.
 int main(){
    using namespace first;

    std::cout << second::x;
------------------------------
*/

//TYPEDEF AND Type aliase

//typedef std::string text_t;  //YERİNE ATAMA,nickname, sondaki t = typedef
using number1_t = int; // TEMPLATE için using güzel

int main(){
    
   std::string firstName;
    text_t firstName = "Brom";
    number1_t age = 31;

    std::cout<<firstName << std::endl;
    //HATA: namespace olmayınca endl'ı da STD::ENDL şeklinde yazmak gerek
    //NEREDEN geldiği önemli
    std::cout << age << '\n';

    return 0;
}