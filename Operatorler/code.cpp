#include <iostream>
#include <string>

using namespace std;

//! Operatörler - Operators

/***
 *! 1. Aritmetik Operatörler
 *! 2. Atama Operatörleri
 *! 3. Karşılaştırma Operatörleri
 *! 4. Mantıksal Operatörler
 *! 5. Bitsel Operatörler
 */

int main()
{
    //! Aritmetik Operatörler
    cout << "Aritmetik Operatörler" << endl;
    int sayi1 = 10, sayi2 = 5;
    cout << "Toplam: " << sayi1 + sayi2 << endl;      // Toplama
    cout << "Fark: " << sayi1 - sayi2 << endl;        // Çıkarma
    cout << "Çarpım: " << sayi1 * sayi2 << endl;      // Çarpma
    cout << "Bölüm: " << sayi1 / sayi2 << endl;       // Bölme
    cout << "Mod: " << sayi1 % sayi2 << endl;         // Mod Alma
    cout << "Sayının 1 fazlası: " << ++sayi1 << endl; // 1 Ekleme
    cout << "Sayının 1 eksiği: " << --sayi2 << endl;  // 1 Çıkarma

    //! Atama Operatörleri ^_^
    cout << "Atama Operatörleri" << endl;
    int x = 15; // --> Normal Atama
    cout << x << endl;
    x += 5; // --> Toplama (x = x + 15)
    cout << x << endl;
    x -= 4; // --> Çıkarma (x = x - 15)
    cout << x << endl;
    x *= 3; // --> Çarpma (x = x * 15)
    cout << x << endl;
    x /= 6; // --> Bölme (x = x / 15)
    cout << x << endl;
    x %= 3; // --> Mod Alma (x = x % 15)
    cout << x << endl;
    x &= 5; // --> Ve Eşittir (x = x & 15)
    cout << x << endl;
    x |= 4; // --> Veya Eşittir (x = x | 15)
    cout << x << endl;
    x ^= 3; // --> XOR (Özel Veya) Eşittir (x = x ^ 15)
    cout << x << endl;
    x >>= 3; // --> Bit Kaydırma (Right Shift) Eşittir (x = x >> 15)
    cout << x << endl;
    x <<= 3; // --> Bit Kaydırma (Left Shift) Eşittir (x = x << 15)
    cout << x << endl;

    //! Karşılaştırma Operatörleri
    cout << "Karşılaştırma Operatörleri" << endl;
    int a = 5, b = 10;
    bool comparison = a == b; // a değişkeni b değişkenine eşit mi, diye sorar.
    cout << comparison << endl;
    comparison = a != b; // a değişkeni b değişkenine eşit değil mi, diye sorar.
    cout << comparison << endl;
    comparison = a > b; // a değişkeni b değişkeninden büyük mü, diye sorar.
    cout << comparison << endl;
    comparison = a < b; // a değişkeni b değişkeninden küçük mü, diye sorar.
    cout << comparison << endl;
    comparison = a >= b; // a değişkeni b değişkeninden büyük veya eşit mi, diye sorar.
    cout << comparison << endl;
    comparison = a <= b; // a değişkeni b değişkeninden küçük veya eşit mi, diye sorar.
    cout << comparison << endl;

    //! Mantıksal Operatörler
    cout << "Mantıksal Operatörler" << endl;
    int i = 8;
    bool result = i > 5 && i < 10; // ve (&&) operatörü her karşılaştırma sonucunun true yani doğru olduğunda, doğru verir.
    cout << "Result: " << result << endl;
    result = i > 5 || i < 7; // veya (||) operatörü karşılaştırmalardan yalnızca bir tanesi bile doğru olursa, doğru verir.
    cout << "Result: " << result << endl;
    result = !(i < 3 || i > 10); // değil (!) operatörü karşılaştırma sonucu true ise false'a, false ise true'ya çevirir. yani tersini alır.
    cout << "Result: " << result << endl;

    return 0;
}