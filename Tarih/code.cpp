#include <iostream>
#include <string>
#include <ctime> // Date ile ilgili verileri kütüphaneden çekiyoruz...

using namespace std;

//! Tarih - Date

int main()
{

    // Güncel Tarih ve Saati Görüntüleyelim.
    time_t timestamp;
    time(&timestamp);

    cout << ctime(&timestamp);

    /*** Zamansal Veri Türleri
     * ! tm_sec -> Bir dakikanın içindeki saniyeler
     * ! tm-min -> Bir saat içindeki dakikalar
     * ! tm-hour -> Gün içindeki saatler
     * ! tm-mday -> Ayın Günü
     * ! tm_mon -> Ay (Ocak ayından başlayarak 0'dan 11'e kadar)
     * ! tm_year -> 1900'den bu yana geçen yıl sayısı
     * ! tm-wday -> Hafta içi (Pazar Gününden başlayarak 0'dan 6'ya kadar)
     * ! tm-yday -> Yılın Günü (0'dan 365'e kadar, 0 1 Ocak'ı temsil eder)
     * ! tm_isdst -> Yaz saati uygulaması yürürlükte olduğunda pozitif, olmadığında sıfır ve bilinmediğinde negatif
     */

    //! Tarih bileşenlerinin nasıl temsil edildiğini her zaman aklınızda bulundurun:
    //! ╣ Saatler 24 saatlik formatta gösterilir. 23:00, 23 olarak gösterilir .
    //! ╣ Aylar 0'dan 11'e kadar gider. Örneğin, Aralık ayı 12 yerine 11 olarak gösterilir .
    //! ╣ Yıllar 1900 yılına göre temsil edilmiştir . 1900 yılından bu yana 124 yıl geçtiği için 2024 yılı 124 olarak temsil edilecektir .

    // Zaman Damgaları Oluşturma
    struct tm datetime;
    time_t timestamp2;
    datetime.tm_year = 2024 - 1900;
    datetime.tm_mon = 12 - 1;
    datetime.tm_mday = 17;
    datetime.tm_hour = 12;
    datetime.tm_min = 30;
    datetime.tm_sec = 1;

    datetime.tm_isdst = -1;

    timestamp2 = mktime(&datetime);

    cout << ctime(&timestamp2) << endl;

    // Datetime Yapıları Oluşturma
    //  Datetime yapısını oluşturun ve eksik üyeleri doldurmak için mktime kullanın
    struct tm datetime2;
    datetime2.tm_year = 2024 - 1900; // Number of years since 1900
    datetime2.tm_mon = 10 - 1;       // Number of months since January
    datetime2.tm_mday = 17;
    datetime2.tm_hour = 0;
    datetime2.tm_min = 0;
    datetime2.tm_sec = 0;
    datetime2.tm_isdst = -1;
    mktime(&datetime2);

    string weekdays[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    cout << "The date is on a " << weekdays[datetime2.tm_wday] << endl;

    // Tarihleri ​​görüntüleyelim
    time_t timeStamp = time(NULL);
    struct tm dateTime = *localtime(&timeStamp);

    cout << asctime(&dateTime);

    // ! ctime()ve fonksiyonları asctime()bize tarihi göstermemizi sağlar ancak tarihin nasıl gösterileceğini seçmemize izin vermez.
    //! Bir tarihin nasıl görüntüleneceğini seçmek için fonksiyonunu kullanabiliriz strftime().

    time_t time_stamp = time(NULL);
    struct tm date_time = *localtime(&time_stamp);

    char output[50];

    cout << "ÖZEL SEÇİMLER" << endl;

    strftime(output, 50, "%B %e, %Y", &date_time);
    cout << output << endl;

    strftime(output, 50, "%I:%M:%S %p", &date_time);
    cout << output << endl;

    strftime(output, 50, "%m/%d/%y", &date_time);
    cout << output << endl;

    strftime(output, 50, "%a %b %e %H:%M:%S %Y", &date_time);
    cout << output << endl;

    /***
     * ! Fonksiyon strftime()bir tarihi biçimlendirir ve onu bir C stili dize olarak bir chardiziye yazar. Dört parametresi vardır:
     * ! İlk parametre biçimlendirilmiş tarihin yazılacağı char dizisini işaret eder.
     * ! İkinci parametre dizide bulunan alanı belirtir.
     * ! Üçüncü parametre, biçim belirteçlerini kullanarak tarihin nasıl biçimlendirileceğini seçmemize olanak tanır.
     * ! Son parametre, görüntülemek istediğimiz tarihi içeren datetime yapısına ait bir işaretçidir.
     */

    /***
     * ! BİÇİM BELİRLEYİCİLER
     * ! %a Haftanın Gününün kısa gösterimi - Fri
     * ! %b Ay adının kısa gösterimi - Dec
     * ! %B Ay adının tam gösterimi - December
     * ! %d Ayın Günü, başında sıfır olan - 09
     * ! %e Önünde boşluk bulunan ayın günü -> 9
     * ! %H Bir saatin 24 saatlik biçimi -> 16
     * ! %I Bir saatin 12 saatlik biçimi -> 02
     * ! %M bir saat içinde dakikalar -> 36
     * ! %p sabah veya öğleden sonra -> PM or AM
     * ! %S Bir dakikanın içindeki saniyeler -> 04
     * ! %y 2 haneli yıl gösterimi -> 24
     * ! %Y 4 haneli yıl gösterimi -> 2024
     */

    // Zamanı Ölçmek

    time_t now;
    time_t nextyear;
    struct tm date_time2;

    now = time(NULL);
    date_time2 = *localtime(&now);
    date_time2.tm_year = date_time2.tm_year + 1;
    date_time2.tm_mon = 0;
    date_time2.tm_mday = 1;
    date_time2.tm_hour = 0;
    date_time2.tm_min = 0;
    date_time2.tm_sec = 0;
    date_time2.tm_isdst = -1;
    nextyear = mktime(&date_time2);

    int diff = difftime(nextyear, now);

    cout << diff << " seconds until next year" << endl;

    // clock(), program çalışırken kısa zaman aralıklarını ölçmek için kullanışlıdır. difftime() Fonksiyonundan daha hassastır.

    // Programın ne kadar çalıştığını ölçmek için kullanalım
    clock_t before = clock();
    int k = 0;
    for (int i = 0; i < 100000; i++)
    {
        k += 1;
        cout << i << endl;
    }
    clock_t duration = clock() - before;
    cout << "Duration: " << (float)duration / CLOCKS_PER_SEC << "seconds";

    return 0;
}