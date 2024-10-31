#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <map>
#include <deque>
#include <set>
#include <algorithm>

using namespace std;

//! Yineleyiciler - Iterators

int main()
{

    vector<string> meslekler = {"Tamirci", "Mimar", "Mühendis", "Doktor"};
    //! Yineleyicinin türü, yinelemesi gereken veri yapısının türüyle eşleşmelidir (string örneğimizde)
    vector<string>::iterator it;

    for (it = meslekler.begin(); it != meslekler.end(); ++it)
    {
        cout << *it << endl;
    }

    //? .begin() ve .end() nedir?
    //* begin() veri yapısının ilk elemanına işaret eden bir yineleyici döndürür.
    //* end() Son öğeden sonraki bir konumu işaret eden bir yineleyici döndürür.
    //* Yani begin() ile end() arasındaki tüm öğeler veri yapısında yer alır.

    it = meslekler.begin();     // ilk öğeyi alır -> Tamirci
    it = meslekler.begin() + 1; // ikinci öğeyi alır -> Mimar
    it = meslekler.begin() + 2; // üçüncü öğeyi alır -> Mühendis
    it = meslekler.end() - 1;
    cout << *it << endl;

    // auto anahtar kelimesi

    vector<string> dersler = {"Türkçe", "Matematik", "Fizik", "Kimya"};
    // ! vector<string>::iterator it; --> Bunun Yerine
    auto it2 = meslekler.begin(); //! --> Bunu kullanabilirsiniz.

    for (auto it2 = dersler.begin(); it2 != dersler.end(); ++it2)
    {
        cout << *it2 << endl;
    }

    // Foreach ile birlikte Yineleme
    for (auto it = dersler.begin(); it != dersler.end();)
    {
        if (*it == "Fizik")
        {
            it = dersler.erase(it); // fizik dersini sil
        }
        else
        {
            ++it;
        }
    }

    for (const string &ders : dersler)
    {
        cout << ders << endl;
    }

    // Tersine Tekrarlama
    for (auto it = dersler.rbegin(); it != dersler.rend(); ++it)
    {
        cout << *it << endl;
    }

    // Liste Örneği

    list<string> meyveler = {"Üzüm", "Elma", "Kayısı", "Şeftal"};

    for (auto it = meyveler.begin(); it != meyveler.end(); ++it)
    {
        cout << *it << endl;
    }

    // Deque Örneği
    deque<string> sehirler = {"Ankara", "İstanbul", "İzmir", "Bursa"};

    for (auto it = sehirler.begin(); it != sehirler.end(); ++it)
    {
        cout << *it << endl;
    }

    // Set Örneği
    set<string> foods = {"Hamburger", "Pizza", "Sandwich", "Taco"};
    for (auto it = foods.begin(); it != foods.end(); ++it)
    {
        cout << *it << endl;
    }

    // Harita Örneği
    map<string, int> harita = {{"Zonguldak", 67}, {"İstanbul", 34}, {"Bursa", 16}};

    for (auto it = harita.begin(); it != harita.end(); ++it)
    {
        cout << it->first << " Plakası: " << it->second << endl;
    }

    //! ALGORİTMALAR

    vector<string> cars = {"Ford", "Volkswagen", "Volvo", "Toyota", "Mercedes"};

    // sort() kullanımı
    sort(cars.begin(), cars.end());

    for (string car : cars)
    {
        cout << car << endl;
    }

    vector<int> numbers = {1, 7, 3, 5, 9, 2};

    // sort() sayısal kulllanımı
    sort(numbers.begin(), numbers.end());

    for (int num : numbers)
    {
        cout << num << endl;
    }

    // Sıralamayı rbegin() ve rend() kullanarak tersine çevirin

    sort(numbers.rbegin(), numbers.rend());

    for (int num : numbers)
    {
        cout << num << endl;
    }

    return 0;
}