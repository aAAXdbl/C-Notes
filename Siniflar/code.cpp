#include <iostream>
#include <string>

using namespace std;

//! Sınıf - Class

class myClass
{                // Sınıf Adı
public:          // Erişim Belirleyicisi
    string name; // Sınıf Üyeleri
    string surname;
    string gender;
    string rank;
    int age;
};

class myCars
{
public:
    string carBrand;
    string carModel;
    string carColor;
    int carYear;
};

int main()
{
    myClass myObj; // Obje olarak sınıfa erişim
    myCars car1;
    myCars car2;

    cout << "Adınızı Giriniz: ";
    cin >> myObj.name;
    cout << "\n";
    cout << "Soyadınızı Giriniz: ";
    cin >> myObj.surname;
    cout << "\n";
    cout << "Cinsiyetinizi Giriniz: ";
    cin >> myObj.gender;
    cout << "\n";
    cout << "Rütbenizi Giriniz: ";
    cin >> myObj.rank;
    cout << "\n";
    cout << "Yaşınızı Giriniz: ";
    cin >> myObj.age;

    cout << "\n\n\n";

    cout << "Adınız: " << myObj.name << endl;
    cout << "Soyadınız: " << myObj.surname << endl;
    cout << "Cinsiyetiniz: " << myObj.gender << endl;
    cout << "Rütbeniz: " << myObj.rank << endl;
    cout << "Yaşınız: " << myObj.age << endl;

    cout << "Arabanın Markasını Giriniz: ";
    cin >> car1.carBrand;
    cout << "\n";
    cout << "Arabanın Modelini Giriniz: ";
    cin >> car1.carModel;
    cout << "\n";
    cout << "Arabanın Rengini Giriniz: ";
    cin >> car1.carColor;
    cout << "\n";
    cout << "Arabanın Yılını Giriniz: ";
    cin >> car1.carYear;
    cout << "\n\n";

    cout << "2.Arabanın Markasını Giriniz: ";
    cin >> car2.carBrand;
    cout << "\n";
    cout << "2.Arabanın Modelini Giriniz: ";
    cin >> car2.carModel;
    cout << "\n";
    cout << "2.Arabanın Rengini Giriniz: ";
    cin >> car2.carColor;
    cout << "\n";
    cout << "2.Arabanın Yılını Giriniz: ";
    cin >> car2.carYear;
    cout << "\n\n";

    cout << "1.Araba: " << car1.carBrand << "  " << car1.carModel << "  " << car1.carColor << "  " << car1.carYear << endl;

    cout << "2.Araba: " << car2.carBrand << "  " << car2.carModel << "  " << car2.carColor << "  " << car2.carYear << endl;

    return 0;
}