#include <iostream>
#include <string>

using namespace std;

//! Kapsülleme - Encapsulation

class Customer
{
private:
    string customerName;
    string customerSurname;
    string customerGender;
    int customerAge;

public:
    // Setter
    void setCustomerName(string n)
    {
        customerName = n;
    }
    // Getter
    string getCustomerName()
    {
        return customerName;
    }

    // Setter
    void setCustomerSurname(string s)
    {
        customerSurname = s;
    }
    // Getter
    string getCustomerSurname()
    {
        return customerSurname;
    }

    // Setter
    void setCustomerGender(string g)
    {
        customerGender = g;
    }
    // Getter
    string getCustomerGender()
    {
        return customerGender;
    }

    // Setter
    void setCustomerAge(int a)
    {
        customerAge = a;
    }
    // Getter
    int getCustomerAge()
    {
        return customerAge;
    }
};

int main()
{

    Customer customer;
    string ad;
    string soyad;
    string cinsiyet;
    int yas;

    cout << "Müşteri Kaydına Hoşgeldiniz!" << endl;
    cout << "Adınız: ";
    cin >> ad;
    cout << "Soyadınız: ";
    cin >> soyad;
    cout << "Cinsiyetiniz: ";
    cin >> cinsiyet;
    cout << "Yaşınız: ";
    cin >> yas;

    cout << "\n"
         << endl;

    customer.setCustomerName(ad);
    customer.setCustomerSurname(soyad);
    customer.setCustomerGender(cinsiyet);
    customer.setCustomerAge(yas);

    cout << "Müşteri Kaydı Başarıyla Tamamlandı! Müşteri Bilgileri Aşağıda Belirtilmiştir." << endl;
    cout << "Müşteri Adı: " << customer.getCustomerName() << endl;
    cout << "Müşteri Soyadı: " << customer.getCustomerSurname() << endl;
    cout << "Müşteri Cinsiyeti: " << customer.getCustomerGender() << endl;
    cout << "Müşteri Yaşı: " << customer.getCustomerAge() << endl;

    return 0;
}