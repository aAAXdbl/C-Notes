#include <iostream>
#include <string>

using namespace std;

//! Kapsam - Scope

// Bir fonksiyon içerisinde oluşturulan değişken, o fonksiyonun yerel kapsamına aittir
//  ve yalnızca o fonksiyon içerisinde kullanılabilir.

// Küresel Kapsam - Global Scope
int x = 5; // --> bu değişken global olarak tanımlandığı için her yerden erişilebilir.

// Ayrıca aynı değişken ismini kullanırsanız iki farklı değişken olarak alacaktır. inside or outside?
int sayi = 1205;

void myFunc()
{
    int a = 23;
    cout << a << endl;

    cout << x << endl; // Global Variables
}

void sayiYazdir()
{
    int sayi = 100;
    cout << sayi << endl;
}

int main()
{

    // C++'da değişkenlere yalnızca oluşturuldukları bölgenin içinde erişilebilir. Buna kapsam denir.
    myFunc();
    // cout << a --> bu bir hatadır çünkü a değişkeni bu fonksiyonun içinde tanımlı değil.

    cout << x << endl; // Global Variables

    // Ayrıca aynı değişken ismini kullanırsanız iki farklı değişken olarak alacaktır. inside or outside?
    sayiYazdir();
    cout << sayi << endl;

    /**
     * ! Global Scope  - UYARI:
     * ! Ancak, hatalara ve karışıklığa yol açabileceğinden, hem global hem de yerel değişkenler için aynı değişken adını
     * ! kullanmaktan kaçınmalısınız.
     * ! Genel olarak, global değişkenlere herhangi bir fonksiyondan erişilebildiği ve değiştirilebildiği için dikkatli olmalısınız.
     */

    return 0;
}