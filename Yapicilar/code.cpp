#include <iostream>
#include <string>

using namespace std;

//! Yapıcılar - Constructors

class MyClass
{       // The Class
public: // Access Specifier
    MyClass()
    { // Constructor
        cout << "Constructor worked!" << endl;
    }
};

class Cars
{
public:
    string carBrand;
    string carModel;
    string carColor;
    int year;
    Cars(string cb, string cm, string cc, int y)
    {
        carBrand = cb;
        carModel = cm;
        carColor = cc;
        year = y;
    }
};

//
class Musteri
{
public:
    string customerName;
    string customerSurname;
    int customerNo;
    Musteri(string cN, string cS, int cNo);
};

Musteri::Musteri(string cN, string cS, int cNo)
{
    customerName = cN;
    customerSurname = cS;
    customerNo = cNo;
}

int main()
{

    MyClass obj; // Şu anda obje oluşturulduğu için Yapıcı(Constructor) çalıştı.
    Cars car1("Mercedes", "CLK GTR", "Gray", 1998);
    Cars car2("Ferrari", "LaFerrari", "Red", 2013);

    cout << car1.carBrand << " <> " << car1.carModel << " <> " << car1.carColor << " <> " << car1.year << endl;
    cout << car2.carBrand << " <> " << car2.carModel << " <> " << car2.carColor << " <> " << car2.year << endl;

    Musteri musteri("GhoST", "Unknown", 3);
    cout << "Müşteri Adı: " << musteri.customerName << "\n"
         << "Müşteri Soyadı: " << musteri.customerSurname << "\n"
         << "Müşteri Numarası: " << musteri.customerNo;

    return 0;
}