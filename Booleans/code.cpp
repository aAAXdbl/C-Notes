#include <iostream>

using namespace std;

//! Booleans

int main()
{
    bool iAmGood = false;
    bool iAmTerrible = true;
    cout << iAmGood << endl;     // OUTPUT >> 0 (false)
    cout << iAmTerrible << endl; // OUTPUT >> 1 (true)

    // Boolean ifadeleri

    int x = 5, y = 10;
    cout << (x < y) << endl; // OUTPUT >> 1 (true) çünkü 5 sayısı 10 sayısından küçüktür.
    // Daha basit bir mantıkla
    cout << (9 > 15) << endl; // OUTPUT 0 (false) çünkü 9 sayısı 15'ten büyük olamaz.

    int a = 23, b = 17;
    cout << (a == b) << endl; // OUTPUT >> 0 (false) çünkü 23 sayısı 17'ye eşit olamaz.

    // Gerçek Hayat Örneği 19 yaşından küçük biri askere gidemez. Aşağıda Yapalım.
    int yas = 12;
    int yasSiniri = 19;
    cout << (yas >= yasSiniri) << endl; // OUTPUT >> 0 (false)

    // My Turn (Burası buranın konusu değil merak etme bir sonraki dersin konusu ^_^)
    int yasim = 15;
    int yasSinirim = 19;

    if (yasim < yasSinirim)
    {
        cout << "Askere Gidemezsiniz!";
    }
    else
    {
        cout << "Askere Gidebilirsiniz!";
    }

    return 0;
}