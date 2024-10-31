#include <iostream>
#include <string>

using namespace std;

//! İşaretçiler - Pointers

int main()
{

    // İşaretçiler bellek adresini saklayan değişkenlerdir. * ile kullanılır
    string fastfood = "Hamburger";
    string *ptr = &fastfood;

    cout << fastfood << endl;
    cout << &fastfood << endl;
    cout << ptr << endl;

    /***
     *? işaretçiler 3 şekilde kullanılır (ilk baştaki tercih edilir)
     *! 1-string* myString; //Tercih Edilen
     *! 2-string *myString;
     *! 3-string * myString;
     */

    // Bellek Adresini ve Değerini Alma

    string food = "Pide";
    string *ptr2 = &food;

    cout << "Bellek Adresi: " << ptr2 << endl;
    cout << "Değer: " << *ptr2 << endl;

    // İşaretçi Değerini Değiştirme

    string fruit = "Elma";
    string *ptr3 = &fruit;

    cout << "Fruit : " << fruit << endl;
    cout << "PTR Fruit: " << *ptr3 << endl;
    cout << "Fruit Address: " << ptr3 << endl;
    *ptr3 = "Mandalina";
    cout << "Fruit : " << fruit << endl;
    cout << "PTR Fruit: " << *ptr3 << endl;
    cout << "Fruit Address: " << ptr3 << endl;

    return 0;
}