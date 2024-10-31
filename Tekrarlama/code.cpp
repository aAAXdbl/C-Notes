#include <iostream>
#include <string>

using namespace std;

//! Tekrarlama - Recursion

// yineleme, iki sayıyı toplama gibi basit bir göreve bölerek bir sayı aralığını birbirine eklemek için kullanılır.
int sum(int x)
{
    if (x > 0)
    {
        return x + sum(x - 1);
    }
    else
    {
        return 0;
    }
}

int main()
{

    int result = sum(5);
    cout << result << endl;

    return 0;
}

/** Örnek Açıklaması
 * * 10 + toplam(9)
 * * 10 + ( 9 + toplam(8) )
 * * 10 + ( 9 + ( 8 + toplam(7) ) )
 * * ...
 * * 10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + toplam(0) 10 + 9 + 8 + 7 + 6 +
 * * 5 + 4 + 3 + 2 + 1 + 0
 */