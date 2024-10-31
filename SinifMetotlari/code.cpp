#include <iostream>
#include <string>

using namespace std;

//! Sınıf Metotları - Class Methods

class MyClass
{
public:
    void myMethod()
    {
        cout << "Big Bang!" << endl;
    }
};

// Sınıf tanımının dışında bir fonksiyon tanımlamak için,
// onu sınıfın içinde bildirmeli ve sonra sınıfın dışında tanımlamalısınız.

class MyClass2
{
public:
    void myMethod2();
};

void MyClass2::myMethod2()
{ // MyClass2'nin içindeki myMethod2() fonksiyonuna erişelim.
    cout << "mmmmmerhaba arkadaşlar!" << endl;
}

// Parametrede Girebilirsiniz

class Car
{
public:
    int myCarSpeed(int maxSpeed);
};

int Car::myCarSpeed(int maxSpeed)
{
    return maxSpeed;
}

int main()
{

    MyClass myObj;
    myObj.myMethod();

    MyClass2 myObj2;
    myObj2.myMethod2();

    Car myCar;
    cout << "My Car Max Speed: " << myCar.myCarSpeed(180) << endl;

    return 0;
}