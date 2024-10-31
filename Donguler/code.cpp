#include <iostream>

using namespace std;

//! Döngüler - Loops

/***
 *! While Loop
 *! Do-while Loop
 *! For Loop
 *! Foreach Loop
 */

int main()
{
    // While Döngüsü
    // 1-10 arası tüm sayıları yazdıralım.
    cout << "While Döngüsü" << endl;
    int i = 1;
    while (i <= 10)
    {
        cout << i << endl;
        i++;
    }
    /***
     *! Görüldüğü üzere döngüde koşul belirtilir daha sonra istenilen kod çalıştırılır ve en sonunda döngünün
     *! devam etmesi için i değeri arttırılır.
     */

    // Do-while Döngüsü
    // 1-5 arası tüm sayıları yazdıralım
    cout << "Do-while döngüsü" << endl;
    int j = 1;
    do
    { // Önce bir kez çalıştırır daha sonrasında koşula bakar.
        cout << j << endl;
        j++;
    } while (j <= 5);

    // For Döngüsü
    cout << "For döngüsü" << endl;
    for (int i = 0; i <= 5; i++)
    {
        cout << i << endl;
    }

    cout << "0-10 arası Çift Sayılar" << endl;
    for (int i = 0; i <= 10; i += 2)
    {
        cout << i << endl;
    }

    // İç İçe Döngü Yapısı
    // İç İçe For Döngüsü ile Çarpım Tablosu yapalım.
    cout << "İç İçe Döngü Yapısı" << endl;
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cout << i << " x " << j << " = " << i * j << endl;
        }
        cout << "------------------------------------------------------" << endl;
    }

    // Foreach Döngüsü
    // Foreach ile 1'den 10'a kadar yazdıralım.
    cout << "Foreach Döngüsü" << endl;
    int sayilar[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i : sayilar)
    {
        cout << i << endl;
    }

    // Break - Continue Yapısı
    cout << "Break Yapısı (For Loop)" << endl;
    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            break;
            // Break: i değeri 5'e eşit olduğunda döngüyü kırar ve devam etmez.
        }
        cout << i << endl;
    }
    cout << "Continue Yapısı (For Loop)" << endl;
    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            continue;
            // Continue: i değeri 5'e eşit olduğunda 5'i es geçer, 5 i ekrana yazdırmaz ve döngüye devam eder.
        }
        cout << i << endl;
    }

    cout << "Break Yapısı (While Loop)" << endl;
    int a = 0;
    while (a < 10)
    {
        if (a == 5)
        {
            break;
            // Break: i değeri 5'e eşit olduğunda döngüyü kırar ve devam etmez.
        }
        cout << a << endl;
        a++;
    }
    cout << "Continue Yapısı (While Loop)" << endl;
    int b = 0;
    while (b < 10)
    {
        if (b == 5)
        {
            b++; // ^_^
            continue;
            // Continue: i değeri 5'e eşit olduğunda 5'i es geçer, 5 i ekrana yazdırmaz ve döngüye devam eder.
        }
        cout << b << endl;
        b++;
    }

    return 0;
}