#include <iostream>
#include <string>

using namespace std;

//! Dizeler - Strings

int main()
{
    string greeting = "Hello My Friend!";
    cout << greeting << endl;

    // String Bağlantısı
    string name = "Ahmet";
    string surname = "Hancı";
    string full_name = name + " " + surname; // Bu şekilde 2 String'i birleştirebilirsiniz.
    cout << full_name << endl;

    // .append() Bağlantısı
    string first_name = "Cengiz";
    string last_name = "Han";
    string full_name2 = first_name.append(last_name); // append fonksiyonu'da first_name'in sağına last_name'i ekler.
    cout << full_name2 << endl;

    // String'te sayılar
    int sayi1 = 23, sayi2 = 17;
    int toplam = sayi1 + sayi2; // OUTPUT >> 40
    cout << "Integer Toplam: " << toplam << endl;

    string s1 = "23", s2 = "17";
    string top = s1 + s2; // OUTPUT >> 2317
    cout << "String Toplam: " << top << endl;

    // Dize uzunluğu - length() kullanımı
    string username = "GhoST1453";
    cout << username << " Kullanıcı Adının Uzunluğu (length): " << username.length() << endl;
    // Alternatif olarak .size()'da kullanabilirsiniz
    cout << username << " Kullanıcı Adının Uzunluğu (size): " << username.size() << endl;

    // String'lere Erişim
    string weird = "Mutlu ve Işık";
    cout << weird[0] << endl; // OUTPUT >> M --> index sistemi 0'dan başlar ve 0 ilk karakter olan 'M'yi alır.
    cout << weird[1] << endl; // OUTPUT >> u --> şimdi ise 1 yazdığımız için 2.karakter olan 'u'yu alır.

    // Son karakteri Yazdırmak için aşağıdaki taktiği kullanabilirsiniz.
    cout << weird[weird.length() - 1] << endl; // OUTPUT >> k --> Text'in uzunluğundan bir çıkartıp son index'i aldık.

    // Text'teki herhangi bir karakteride değiştirebiliriz.
    weird[0] = 'K';
    cout << weird << endl;

    // .at() fonksiyonu
    string myGPU = "RX 6500 XT";
    cout << myGPU.at(1) << endl;                  // OUTPUT >> X
    cout << myGPU.at(3) << endl;                  // OUTPUT >> 6
    cout << myGPU.at(myGPU.length() - 1) << endl; // OUTPUT >> T
    myGPU.at(1) = 'e';
    cout << myGPU << endl; // OUTPUT >> meGPU

    // Özel Karakterler
    string txt = "Hello Everybody! I am John and My Favourite book \"Martin Eden\".";
    cout << txt << endl; // Kaçış karakteri olan \" işareti metinsel ifadelerin içine çift tırnak koymaya yarar.
    string say = "Çocuk \'Off!\' dedi bakkala ekmek almaya gitti.";
    cout << say << endl; // Kaçış karakteri olan \' işareti metinsel ifadelerin içine tek tırnak koymaya yarar.
    string lyric = "Zekanın Ölçüsü Gerektiğinde düşüncelerini değiştirebilmekte yatar! \\ Einstein";
    cout << lyric << endl; // Kaçış karakteri olan \\ işareti metinsel ifadelerin içine '\' koymaya yarar.

    //! Kullanıcı Girişi Boşluktan sonrasını algılamaz. onu bir bitiş olarak çeker.
    /*** Örneğin;
     *! Alttaki durumda adSoyad kısmına "Zehra Keser" yazan kullanıcı sonuç olarak Sadece Zehra yazısını görecektir.
     *! string adSoyad;
     *! cout << "Adınızı ve Soyadınızı Giriniz: ";
     *! cin >> adSoyad;
     *! cout << "Adınız ve Soyadınız: " << adSoyad;
     */

    // getline() komutu
    string adSoyad;
    cout << "Adınızı ve Soyadınızı Giriniz: ";
    getline(cin, adSoyad); // Bu işe yarayacak ve "Zehra Keser" yazısının tamamını görebileceğiz.
    cout << "Adınız ve Soyadınız: " << adSoyad << endl;

    // C-tipi string'ler
    string greeting1 = "Hello";
    char greeting2[] = "Hello World!";
    cout << greeting1 << endl; // OUTPUT >> Hello
    cout << greeting2 << endl; // OUTPUT >> Hello World!

    return 0;
}