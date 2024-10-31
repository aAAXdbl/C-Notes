#include <iostream>

using namespace std;

//! Koşullu İfadeler - Condition Statements

int main()
{

    /***
     *! if
     *! else if
     *! else
     *! switch
     */

    // Basit Bir if örneği
    if (20 > 18)
    {
        cout << "20 sayısı 18 sayısından büyüktür." << endl;
    }

    // Hadi biraz değişkende kullanalım

    int sayi1 = 15, sayi2 = 27;
    if (sayi1 > sayi2)
    {
        cout << "sayi1 sayi2'den büyüktür." << endl;
    } // Örneğin bu if bloğunda ekranda herhangi birşey yazmayacaktır çünkü koşul false döndüğü için bloğun içindeki kod aktifleşmeyecektir.

    // if-else kullanımı
    // Bu kullanımda ise eğer ortalaması 50 ve 50'den fazla ise dersi geçer, 50'den az ise geçemez.
    int ortalama = 70;
    if (ortalama >= 50)
    {
        cout << "Dersi Geçtiniz!" << endl;
    }
    else
    {
        cout << "Dersten Kaldınız!" << endl;
    }

    // if-else if-else kullanımı
    // Bu kullanımda öğrenci ortalamasına göre 1-5 arası not verelim.
    ortalama = 75;

    if (ortalama >= 0 && ortalama < 25)
    {
        cout << "Notunuz 1, Kaldınız!" << endl;
    }
    else if (ortalama >= 25 && ortalama < 50)
    {
        cout << "Notunuz 2, Kaldınız!" << endl;
    }
    else if (ortalama >= 50 && ortalama < 70)
    {
        cout << "Notunuz 3, Geçtiniz!" << endl;
    }
    else if (ortalama >= 70 && ortalama < 85)
    {
        cout << "Notunuz 4, Teşekkür ile Geçtiniz!" << endl;
    }
    else
    {
        cout << "Notunuz 5, Pekiyi ile Geçtiniz!" << endl;
    }

    // Kısa if-else kullanımı

    bool playChoose = true;
    cout << (playChoose ? "Let's Play!" : "Nah, I don't play.") << endl;
    // tek satırda if else yazmış olduk soru işaretinden öncesi ilk koşul ":" dan sonrakiler ise diğer durumu gösterir.

    // Switch-Case

    int day = 6;
    switch (day)
    {
        /***
        *! case: belirtilen koşulu gösterir.
        *! break: belirtilen koşul görevini yerine getirdiğinde diğer koşullara bakmamak için break ile işlem kapatılır.
        *! default: belirtilen hiçbir koşula uygun değer girilmediyse (else gibi) default kullanılır.
        */

    case 1:
        cout << "Pazartesi" << endl;
        break;
    case 2:
        cout << "Salı" << endl;
        break;
    case 3:
        cout << "Çarşamba" << endl;
        break;
    case 4:
        cout << "Perşembe" << endl;
        break;
    case 5:
        cout << "Cuma" << endl;
        break;
    case 6:
        cout << "Cumartesi" << endl;
        break;
    case 7:
        cout << "Pazar" << endl;
        break;
    default:
        cout << "Yanlış Değer Girildi! Lütfen 1-7 arası bir değer giriniz." << endl;
    } // OUTPUT >> Cumartesi

    return 0;
}