#include <iostream>
#include <cmath>

using namespace std;

//! Math - Matematik

int main()
{

    // min() & max() --> x ve y'yin en büyük ve en küçük değerini bulmak için kullanılır.
    cout << max(5, 10) << endl; // OUTPUT >> 10
    cout << min(5, 10) << endl; // OUTPUT >> 5

    // <cmath> kütüphanesi

    cout << "Kök 64'ün karekökü = " << sqrt(64) << endl;
    cout << "1.3 sayısının yuvarlandığı en yakın sayı = " << round(1.3) << endl;
    cout << "2 sayısının logaritması = " << log(2) << endl;

    return 0;
}