#include <iostream>
#include <string>

using namespace std;

//! Fonksiyon Aşırı Yüklemesi - Function Overlaoding

// Fonksiyon aşırı yüklemesi ile birden fazla fonksiyon farklı parametrelerle aynı ada sahip olabilir:
int myFunc(int a);
double myFunc(int a, int b);
string myFunc(string name, string surname);

// Farklı veri tiplerinde olan sayıları toplayan 2 fonksiyonu ele alalım
int myIntFunc(int x, int y)
{
    return x + y;
}
double myDoubleFunc(double x, double y)
{
    return x + y;
}

// Aynı işi tek fonksiyona overload yaparak da yapabiliriz.
int plusFunc(int x, int y)
{
    return x + y;
}
double plusFunc(double x, double y)
{
    return x + y;
}

int main()
{

    // Farklı veri tiplerinde olan sayıları toplayan 2 fonksiyonu ele alalım
    cout << myIntFunc(25, 15) << endl;
    cout << myDoubleFunc(2.16, 3.14) << endl;

    // Aynı işi tek fonksiyona overload yaparak da yapabiliriz.
    cout << plusFunc(123, 234);
    cout << plusFunc(1.6, 2.80);

    return 0;
}