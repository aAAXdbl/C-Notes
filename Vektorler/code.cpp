#include <iostream>
#include <vector>

using namespace std;

//! Vektörler - Vectors

int main()
{

    vector<string> fruits = {"Elma", "Erik", "Üzüm", "Muz"};
    //! Vektörün türü (string örneğimizde) bildirildikten sonra değiştirilemez.

    cout << fruits[2] << endl;
    cout << fruits[1] << endl;

    // .front() and .back();

    cout << fruits.front() << endl;
    cout << fruits.back() << endl;

    // .at() kullanımı

    cout << fruits.at(1) << endl;

    // Vektörün Elemanını Değiştirme

    vector<int> numbers = {1, 2, 3, 4, 5, 6, 7};

    numbers[1] = 345;
    cout << numbers[1] << endl;

    // Fakat şu .at() ile daha güvenilir.

    numbers.at(3) = 1000;
    cout << numbers.at(3) << endl;

    // Vektöre Eleman Ekleme ve Kaldırma

    vector<string> dersler = {"Kimya", "Biyoloji", "Fizik"};
    dersler.push_back("Matematik");
    cout << dersler.at(3) << endl;
    dersler.push_back("Türkçe");
    cout << dersler.at(4) << endl;

    dersler.pop_back();
    cout << dersler.back() << endl;

    // Ayrıca vektörün boyutunu öğrenmek istiyorsanız;
    cout << dersler.size() << endl;

    // Vektörlerin boş mu olduğunu kontrol etmek istiyorsanız;
    vector<string> arabalar;
    cout << arabalar.empty() << endl;

    // Vektörün içinde döngü

    vector<string> cars = {"Mercedes", "Ferrari", "Audi", "BMW"};
    for (int i = 0; i < cars.size(); i++)
    {
        cout << cars.at(i) << endl;
    }

    // Daha Kolay olması açısından Foreach kullanabiliriz (C++ 11 (2011) Sürümü ile tanıtıldı)
    for (string i : cars)
    {
        cout << i << endl;
    }

    return 0;
}