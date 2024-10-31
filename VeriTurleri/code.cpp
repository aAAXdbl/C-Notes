#include <iostream>
#include <string>

using namespace std;

//! Veri Türleri - Data Types

int main()
{
    // Temel Veri Türleri
    /***
     *! int = tam sayıları alır. Exam: 2 , 7 , 368 (2 or 4 bytes)
     *! float = ondalıklı sayıları alır. Exam 2.15 , 1.6 , 2.80 (4 bytes)
     *! double = ondalıklı sayıları alır. Exam: 2.15 , 3.14 , 1.66667 (8 bytes)
     *! char = tek karakterli metinsel ifadeleri alır. Exam: 'A' , 'C' , '8' (1 byte)
     *! string = metinsel ifadeleri alır. Exam: "Hello" , "Pass123" (8 bytes)
     *! bool = true veya false değeri alır. Exam: true , false (başka da yok zaten xd) (1 byte)
     */

    // Sayısal Veri Türleri

    // int
    int tamSayi = 15;
    cout << tamSayi << endl; // OUTPUT >> 15

    // float
    float ondalikli_sayi = 1.6;
    cout << ondalikli_sayi << endl; // OUTPUT >> 1.6

    // double
    double ondalikli_sayi2 = 3.14;
    cout << ondalikli_sayi2 << endl; // OUTPUT >> 3.14

    // Bool Veri Türü

    bool dogru = true;
    bool yanlis = false;
    cout << dogru << endl;  // OUTPUT 1 (true)
    cout << yanlis << endl; // OUTPUT 0 (false)

    // Char Veri Türü
    char karakter = 'Q';
    cout << karakter << endl; // OUTPUT A

    // Alternatif olarak, ASCII'ye aşinaysanız, belirli karakterleri görüntülemek için ASCII değerlerini kullanabilirsiniz
    char a = 65, b = 66, c = 67;
    cout << a << b << c << endl; // OUTPUT ABC

    // String Veri Türü
    string yazi = "Hello MY Friend!";
    cout << yazi << endl;

    return 0;
}