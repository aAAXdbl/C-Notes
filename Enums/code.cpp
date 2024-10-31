#include <iostream>
#include <string>

using namespace std;

// Numaralandırma - Enums

int main()
{

    // Enum Tanımlama

    enum Level
    {
        LOW,
        MEDIUM,
        HIGH
    };
    enum Level myVar = HIGH;
    cout << myVar << endl;

    // Değerleri değiştirme

    enum Level2
    {
        LOW2 = 10,
        MEDIUM2 = 20,
        HIGH2 = 30
    };
    enum Level2 myVar2 = MEDIUM2;
    cout << myVar2 << endl;

    // Belirli bir öğeye değer atarsanız,sonraki öğeler o değere göre güncellenir.
    enum Level3
    {
        LOW3 = 10,
        MEDIUM3,
        HIGH3
    };
    enum Level3 myVar3 = HIGH3;
    cout << myVar3 << endl;

    // Switch İfadesinde Enum
    enum Seviye
    {
        DUSUK = 1,
        ORTA,
        YUKSEK
    };

    enum Seviye myVar4 = YUKSEK;

    switch (myVar4)
    {
    case 1:
        cout << "Düşük Seviye" << endl;
        break;
    case 2:
        cout << "Orta Seviye" << endl;
        break;
    case 3:
        cout << "Yüksek Seviye" << endl;
        break;
    default:
        cout << "Seviye Bilinmiyor" << endl;
        break;
    }

    return 0;
}