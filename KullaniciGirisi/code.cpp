#include <iostream>
#include <string>

using namespace std;

//! Kullanıcı Girişi - User Input

int main()
{
    int x;
    cout << "Bir Sayı Giriniz: ";
    cin >> x; // cin komutu kullanıcıdan veri girmesini ister. daha sonrasında bu veriyi x'e atar.
    cout << "Girdiğiniz Sayı: " << x << endl;

    // Kullanıcının girdiği iki sayı toplama örneği yapalım

    int sayi1, sayi2, toplam;
    cout << "Birinci Sayıyı Giriniz: ";
    cin >> sayi1;
    cout << "İkinci Sayıyı Giriniz: ";
    cin >> sayi2;
    toplam = sayi1 + sayi2;
    cout << "Girdiğiniz iki sayının toplamı = " << toplam << endl;

    return 0;
}