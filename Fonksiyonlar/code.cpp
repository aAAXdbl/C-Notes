#include <iostream>
#include <string>

using namespace std;

//! Fonksiyonlar - Functions

// Fonksiyon Yazma
void myFunction()
{
    cout << "Hello World!" << endl;
}

void myFunction2();

// Parametreler ve Argümanlar
void topla(int a, int b)
{
    cout << a + b << endl;
}

// Varsayılan Parametre
void meyve(string m = "Elma")
{
    cout << m << endl;
}

// Çoklu Parametre
void adSoyad(string name, string surname)
{
    cout << "Adınız: " << name << "\nSoyadınız:  " << surname << endl;
}

// Return Kullanımı
int cikarma(int sayi)
{
    return sayi - 10;
}

int carpma(int s1, int s2)
{
    return s1 * s2;
}

// Fonksiyonlarda referans kullanma
void swapper(int &x, int &y)
{
    int z = x;
    x = y;
    y = z;
}

// Fonksiyonlarda Dizi Kullanımı
void diziYazdir(int myArray[5])
{
    for (int i = 0; i < 5; i++)
    {
        cout << myArray[i] << "\t";
    }
}

int main()
{

    // Fonksiyon Çağırma
    myFunction();

    // Bir Fonksiyon birden fazla kez çağırılabilir.
    myFunction();
    myFunction();
    myFunction();

    // Fonksiyonlar main fonksiyondan sonra yazılırsa main fonksiyonunda çağırılamaz.
    // Fakat Önce Fonksiyonu yukarıda tanımlayıp main fonksiyonunun altında ise içini doldurabiliriz

    // Parametreler ve Argümanlar
    topla(5, 7);
    topla(23, 456);

    // Varsayılan Parametre
    meyve();
    meyve("Erik");

    // Çoklu Parametre
    adSoyad("Harris", "Johnson");

    // Return Kullanımı
    cout << cikarma(15) << endl; // OUTPUT >> 5

    // Sonucu bir değişkende de saklayabiliriz.
    int carpimSonucu = carpma(23, 793);
    cout << "Çarpım Sonucu: " << carpimSonucu << endl; // OUTPUT >> 18239

    // Fonksiyonlarda referans kullanma
    int firstNum = 100, secondNum = 200;
    cout << "Before Swap: " << firstNum << secondNum << endl; // OUTPUT >> 100200
    swapper(firstNum, secondNum);
    cout << "After Swap: " << firstNum << secondNum << endl; // OUTPUT >> 200100

    // Fonksiyonlarda Dizi Kullanımı
    int myArray[5] = {1, 2, 3, 4, 5};
    diziYazdir(myArray); // OUTPUT >> 1    2    3    4    5

    return 0;
}

void myFunction2()
{
    cout << "Hello My Friend!" << endl;
}
