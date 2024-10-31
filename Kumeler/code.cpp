#include <iostream>
#include <string>
#include <set>

using namespace std;

//! Kümeler - Sets

int main()
{

    // Bir küme oluşturalım.

    set<string> sigaraMarkalari = {"Camel", "Winston", "Marlboro", "Parliament"};
    //! Kümenin türü (string örneğimizde) bildirildikten sonra değiştirilemez.

    for (string sigara : sigaraMarkalari)
    {
        cout << sigara << endl;
    }

    //! Kümeler sort mantığı gibi sıralamayla yazdırır.
    //! Metinsel Bir ifade ise A'dan Z'ye sayısal bir ifade ise küçükten büyüğe.

    // Bir kümeyi azalan sıraya göre sıralayalım.
    set<int, greater<int>> numbers = {0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20};

    for (int i : numbers)
    {
        cout << i << endl;
    }

    // Benzersiz Elementler...
    // Aynı Elementten 1'den fazla olsa bile sadece 1'ini kabul eder ve sadece 1'ini ekrana yazdırır.
    set<string> giyimMarkasi = {"GUCCI", "Nike", "Adidas", "LC Waikiki", "GUCCI"};

    for (string giysi : giyimMarkasi)
    {
        cout << giysi << endl;
    }

    // Eleman Ekleme
    giyimMarkasi.insert("Puma");
    for (string giysi : giyimMarkasi)
    {
        cout << giysi << endl;
    }

    // Eleman Silme
    giyimMarkasi.erase("LC Waikiki");
    for (string giysi : giyimMarkasi)
    {
        cout << giysi << endl;
    }

    // Tüm elemanları silmek istiyorsak'da .clear() kullanabiliriz.
    //* giyimMarkasi.clear();

    // Bir Kümenin boş olup olmadığını kontrol etme
    cout << giyimMarkasi.empty() << endl; // OUTPUT >> 0 (giyimMarkasi is not empty)

    // Kümeler ile döngü kullanımı

    set<string> cars = {"Ferrari", "Lamborghini", "Pagani", "Bugatti"};
    for (string car : cars)
    {
        cout << car << endl;
    }

    return 0;
}