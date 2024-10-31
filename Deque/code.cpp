#include <iostream>
#include <string>
#include <deque>

using namespace std;

//! Deque

int main()
{

    // Bir Deque oluşturalım

    deque<string> bigCorporations = {"Google", "Amazon", "Microsoft", "Apple"};
    //! Deque'nin türü (string örneğimizde) bildirildikten sonra değiştirilemez.

    for (string corp : bigCorporations)
    {
        cout << corp << endl;
    }

    // Deque Elemanlarına Erişim
    cout << bigCorporations[1] << endl; // OUTPUT >> Amazon
    cout << bigCorporations[2] << endl; // OUTPUT >> Microsoft

    // .front() ve .back() fonksiyonlarını da kullanabilirsiniz
    cout << bigCorporations.front() << endl; // OUTPUT >> Google
    cout << bigCorporations.back() << endl;  // OUTPUT >> Apple

    // Ayrıca .at() fonksiyonunu da kullanabilirsiniz.
    cout << bigCorporations.at(1) << endl; // OUTPUT >> Amazon

    // Deque Elemanını Değiştirme
    bigCorporations[0] = "Facebook";
    cout << bigCorporations.front() << endl; // OUTPUT >> Facebook

    // fakat .at() fonksiyonu ile eleman değiştirme daha güvenilirdir.
    bigCorporations.at(3) = "Alphabet";
    cout << bigCorporations.back() << endl;

    // Deque Elemanları Ekle
    deque<string> telefonMarkalari = {"Samsung", "Apple", "OPPO"};
    telefonMarkalari.push_front("Xiaomi");
    telefonMarkalari.push_back("Huawei");
    cout << telefonMarkalari.front() << endl;
    cout << telefonMarkalari.back() << endl;

    // Deque Elemanlarını Silme
    telefonMarkalari.pop_front();
    telefonMarkalari.pop_back();
    cout << telefonMarkalari.front() << endl;
    cout << telefonMarkalari.back() << endl;

    // Deque Boyutu Öğrenme
    cout << telefonMarkalari.size() << endl;

    // Bir deque'nin boş mu olup olmadığını kontrol etme
    cout << telefonMarkalari.empty() << endl; // OUTPUT >> 0 (telefonMarkalari is not empty)

    // Deque ile döngü kullanımı
    for (string telefon : telefonMarkalari)
    {
        cout << telefon << endl;
    }

    return 0;
}