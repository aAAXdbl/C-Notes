#include <iostream>
#include <string>
#include <list>

using namespace std;

//! Listeler - List

int main()
{

    list<string> jobs = {"Mühendis", "Mimar", "Polis"};
    //! Listenin türü (string örneğimizde) bildirildikten sonra değiştirilemez.

    for (string i : jobs)
    {
        cout << i << endl;
    }

    // Bir Listeye Erişim
    list<string> dersler = {"Matematik", "Fizik", "Kimya", "Biyoloji"};
    cout << dersler.front() << endl; // OUTPUT >> Matematik
    cout << dersler.back() << endl;  // OUTPUT >> Biyoloji

    // Bir Liste Ögesini Değiştirme
    dersler.front() = "Türkçe";
    dersler.back() = "İngilizce";

    cout << dersler.front() << endl; // OUTPUT >> Türkçe
    cout << dersler.back() << endl;  // OUTPUT >> İngilizce

    // Liste Ögeleri Ekleme
    dersler.push_front("Programlama Temelleri");
    dersler.push_back("Tarih");

    cout << dersler.front() << endl; // OUTPUT >> Programlama Temelleri
    cout << dersler.back() << endl;  // OUTPUT >> Tarih

    // Liste Ögeleri Silme
    dersler.pop_front();
    dersler.pop_back();

    cout << dersler.front() << endl; // OUTPUT >> Türkçe
    cout << dersler.back() << endl;  // OUTPUT >> İngilizce

    // Liste boyutu öğrenme
    cout << dersler.size() << endl; // OUTPUT >> 4

    // Bir Listenin Boş Olup Olmadığını Kontrol Etme
    list<string> arabalar;
    cout << arabalar.empty() << endl; // OUTPUT >> 1 (List is empty)

    // Listede Döngü Kullanımı
    list<string> cars = {"Ford", "Fiat", "Audi", "BMW", "Volkswagen"};

    // ! Bu şekilde for döngüsü kullanamayız çünkü listelerde index mantığı ile elemanları çağıramıyoruz
    /*for (int i = 0; i < cars.size(); i++)
    {
        cout << cars[i] << endl;
    }*/

    // ! Bunun yerine foreach döngüsünü kullanabiliriz
    for (string car : cars)
    {
        cout << car << endl;
    }

    return 0;
}