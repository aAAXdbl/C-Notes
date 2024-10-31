#include <iostream>
#include <string>

using namespace std;

//! Erişim Belirleyiciler - Access Specifiers

/***
 * ! Public: Üyelere sınıfın dışından erişilebilir
 * ! Private: Üyelere sınıfın dışından erişilemez (veya görüntülenemez)
 * ! Protected: Üyelere sınıfın dışından erişilemez, ancak miras(Inheritance) alınan sınıflarda erişilebilir.
 */

class MyClass
{
public:
    int x;

private:
    int y;
};

// ! Not: Bir erişim belirtecini belirtmezseniz, varsayılan olarak bir sınıfın tüm üyeleri özeldir

class MyClass2
{
    int a; // Private
    int b; // Private
};

int main()
{

    MyClass myObj;
    myObj.x = 10; // Erişilebilir
    // ! myObj.y = 20; --> Erişilemez -_-
    // ! error: y is private!

    return 0;
}