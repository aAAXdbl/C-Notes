#include <iostream>
#include <string>

using namespace std;

//! Diziler - Arrays

int main()
{

    // Dizi Tanımlama

    // 4 Elemanlı dizi tanımı (string)
    string meyveler[4] = {"Elma", "Çilek", "Erik", "Muz"};

    // 3 Elemanlı dizi tanımı (int)
    int sayilar[5] = {1, 2, 3};

    // Dizi Elemanlarına Erişim
    cout << "Dizi Elemanlarına Erişim" << endl;
    cout << meyveler[2] << endl;

    // Dizideki Elemanı Değiştirme
    cout << "Dizideki Elemanı Değiştirme" << endl;
    meyveler[0] = "Kivi";
    cout << meyveler[0] << endl;

    // Döngüler ile Dizilere Erişim
    cout << "Döngüler ile Dizilere Erişim" << endl;
    string arabalar[5] = {"Lamborghini", "Koenigsegg", "Bugatti", "Ferrari", "Porsche"};
    for (int i = 0; i < 5; i++)
    {
        cout << arabalar[i] << endl;
    }

    // index ve değeri yan yana yazdıralım.
    cout << "index ve değeri yan yana yazdıralım." << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << i << " = " << arabalar[i] << endl;
    }

    // Döngüler ile Dizilere Erişim (sayılar)
    cout << "Dizideki Ondalıklı Sayıları Yazdırma" << endl;
    double ondalikli_sayilar[5] = {3.14, 1.6, 1.18, 2.80, 7.62};
    for (int i = 0; i < 5; i++)
    {
        cout << ondalikli_sayilar[i] << endl;
    }

    // Ayrıca genelde dizilere veya vektörlere erişim için foreach döngüsü kullanılır.
    cout << "foreach döngüsü ile dizilere erişim" << endl;
    int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i : numbers)
    {
        // 1-10 Arası Tek Sayıları Yazdıralım
        if (i % 2 == 1)
        {
            cout << i << endl;
        }
    }

    // Vee Gelelim diğer dizi tanımlama türlerine.
    // Şöyle ki dizinin kaç eleman alacağını belirtmemize gerek yok
    int myNumbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    cout << myNumbers[0] << endl;
    // Biz yine de daha az hata ile karşılaşmak isteyeceğimiz için eleman sayısını belirtmek isteyebiliriz.

    // Bir diğer Dizi tanımlama türü ise tek tek eleman ekleme (burada dizinin elemean sayısını belirtmek zorundasınız)
    char favori_harfler[5];
    favori_harfler[0] = 'G';
    favori_harfler[1] = 'h';
    favori_harfler[2] = 'o';
    favori_harfler[3] = 'S';
    favori_harfler[4] = 'T';
    // daha sonra döngü ile tek seferde hepsini yazdıralım.
    for (char i : favori_harfler)
    {
        cout << i << endl;
    }

    // Bir dizinin boyutunu öğrenme
    // sizeof()
    int myNumbers2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    cout << "Dizi boyutu = " << sizeof(myNumbers2) / sizeof(int) << endl;
    // sizeof bayt boyutunu verir bu yüzden eleman sayısını bulmak istiyorsak, elemanların veri tipinin bayt cinsine bölmemiz gerekir.

    // sizeof'u döngülerde kullanmak
    cout << "sizeof'u döngülerde kullanmak" << endl;
    int sayilar2[] = {1, 2, 4, 8, 13, 346, 235, 685, 1453};
    for (int i = 0; i < sizeof(sayilar2) / sizeof(int); i++)
    {
        cout << sayilar2[i] << endl;
    }

    //! Çok Boyutlu Diziler

    string letters[2][4] =
        {
            {"A", "B", "C", "D"},
            {"E", "F", "G", "H"}};

    cout << letters[0][2] << endl;

    int boyut3[2][2][2] =
        {
            {{1, 2},
             {3, 4}},
            {{5, 6},
             {7, 8}}};

    cout << boyut3[0][1][0] << endl;

    // Çok Boyutlu dizilerde Eleman Değiştirme
    string fruits[2][3] =
        {
            {"Elma", "Armut", "Kivi"},
            {"Muz", "Ayva", "Çilek"}};

    fruits[1][1] = "Erik";
    cout << fruits[1][1] << endl;

    // Çok boyutlu Dizilere Döngü ile Erişim
    // Her Biri dizi için ayrı bir döngü
    string fruits2[2][3] =
        {
            {"Elma", "Armut", "Kivi"},
            {"Muz", "Ayva", "Çilek"}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << fruits2[i][j] << endl;
        }
    }

    // Peki ya 3 Boyutlu Bir dizie Döngü??
    string cars[2][2][3] =
        {
            {{"Mercedes", "BMW", "Audi"},
             {"Volkswagen", "Chevrolet", "Renault"}},
            {{"Ferrari", "Lamborghini", "Pagani"},
             {"Koenigsegg", "Bugatti", "Porsche"}}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                cout << cars[i][j][k] << endl;
            }
        }
    }

    return 0;
}
