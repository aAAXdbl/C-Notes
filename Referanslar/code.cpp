#include <iostream>
#include <string>

using namespace std;

//! Referanslar - Referances;

int main()
{

    // Referans Oluşturma
    string fastfood = "Hamburger";
    string &food = fastfood;

    // Artık değişkenin adını veya referans adını kullanabiliriz.
    cout << fastfood << endl;
    cout << food << endl;

    // Bellek Adresi

    string yiyecek = "Pide";
    cout << &yiyecek << endl;
    // Bellek adresi onaltılık biçimdedir (0x..)

    /*
    Peki bellek adresini bilmek neden faydalıdır?
    Referanslar ve İşaretçiler (bunları bir sonraki bölümde öğreneceksiniz) C++'da önemlidir,
    çünkü bunlar size bilgisayarın belleğindeki verileri değiştirme yeteneği verir; bu da kodu azaltabilir ve performansı artırabilir .

    Bu iki özellik C++'ı Python ve Java gibi diğer programlama dillerinden ayıran özelliklerden biridir .
    */

    return 0;
}