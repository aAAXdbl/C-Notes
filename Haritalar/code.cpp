#include <iostream>
#include <string>
#include <map>

using namespace std;

//! Haritalar - Maps

int main()
{

    //? Bir harita, elemanları " anahtar/değer " çiftleri halinde depolar.
    //*                           |>Key  |>Value

    map<string, int> sport_calories = {{"Volleyball", 50},
                                       {"Basketball", 100},
                                       {"Swim", 150}};
    cout << "Volleyball burns " << sport_calories["Volleyball"] << " calories." << endl;
    cout << "Basketball burns " << sport_calories["Basketball"] << " calories." << endl;
    cout << "Swim burns " << sport_calories["Swim"] << " calories." << endl;

    // Ayrıca .at() Fonksiyonu ile de erişilebilir.
    cout << "Volleyball burns " << sport_calories.at("Volleyball") << " calories." << endl;
    cout << "Basketball burns " << sport_calories.at("Basketball") << " calories." << endl;
    cout << "Swim burns " << sport_calories.at("Swim") << " calories." << endl;

    // Değerleri Değiştirme
    sport_calories["Volleyball"] = 100;

    sport_calories.at("Basketball") = 150;
    sport_calories.at("Swim") = 200;

    cout << "Volleyball burns " << sport_calories.at("Volleyball") << " calories." << endl;
    cout << "Basketball burns " << sport_calories.at("Basketball") << " calories." << endl;
    cout << "Swim burns " << sport_calories.at("Swim") << " calories." << endl;

    cout << "\n";

    // Eleman Ekleme
    map<string, int> gidaFiyatlari = {{"Ekmek", 10}, {"Makarna", 25}, {"Yağ", 200}};
    //? Sıralamayı tersine çevirmek istersen:
    //? map<string,int,greater<string>> gidaFiyatlari;

    cout << "Ekmek Fiyatı : " << gidaFiyatlari.at("Ekmek") << " TL" << endl;
    cout << "Makarna Fiyatı : " << gidaFiyatlari.at("Makarna") << " TL" << endl;
    cout << "Yağ Fiyatı : " << gidaFiyatlari.at("Yağ") << " TL" << endl;

    gidaFiyatlari["Pirinç"] = 100;
    // Ayrıca Daha Güvenilir olan .at() fonksiyonunu da tercih edebiliriz
    gidaFiyatlari.insert({"Bulgur", 80});

    cout << "Pirinç Fiyatı : " << gidaFiyatlari.at("Pirinç") << " TL" << endl;
    cout << "Bulgur Fiyatı : " << gidaFiyatlari.at("Bulgur") << " TL" << endl;

    // Eşit Anahtarlara Sahip Öğeler
    //! Bir haritada eşit anahtarlara sahip elemanlar bulunamaz.
    gidaFiyatlari.insert({"Şeker", 35});
    gidaFiyatlari.insert({"Şeker", 40});

    cout << "Şeker Fiyatı : " << gidaFiyatlari.at("Şeker") << " TL" << endl; // OUTPUT >> 35 Tl

    // Elemanları Silme
    gidaFiyatlari.erase("Şeker");

    // Tüm elemanları ise .clear() fonksiyonu ile silebilirsiniz.
    //* gidaFiyatlari.clear();

    // Bir haritanın boyutunu bulma
    cout << "Gıda Fiyatları Haritasında Eleman Sayısı : " << gidaFiyatlari.size() << endl;

    // Bir haritanın boş olup olmadığını kontrol etme
    cout << gidaFiyatlari.empty() << endl; // OUTPUT >> 0 (gidaFiyatlari is not empty)

    // Harita ile döngü kullanımı (auto , first , second)
    for (auto gida : gidaFiyatlari)
    {
        cout << gida.first << " Fiyatı: " << gida.second << " TL" << endl;
    }

    return 0;
}