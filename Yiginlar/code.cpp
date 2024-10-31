#include <iostream>
#include <string>
#include <stack>

using namespace std;

//! Yığınlar - Stacks

int main()
{

    // Bir Yığın Oluşturalım

    stack<int> numbers;
    //! Yığının türü (örneğimizde string) bildirildikten sonra değiştirilemez.

    //! Vektörlerde olduğu gibi, bildirim anında yığına eleman ekleyemezsiniz:
    //!  stack<int> numbers = {1,2,3,4,5,6}; -> ERROR!

    // Ögeleri Ekleyelim
    stack<int> sayilar;
    sayilar.push(10);
    sayilar.push(20);
    sayilar.push(30);
    sayilar.push(40);
    sayilar.push(50);

    // Yığın Elemanlarına Erişim
    // Bir yığında, yalnızca en üstteki öğeye erişebilirsiniz; bu da .top() fonksiyonu kullanılarak yapılır:
    cout << sayilar.top() << endl; // OUTPUT >> 50

    // Üst Elemanı Değiştirme
    sayilar.top() = 100;
    cout << sayilar.top() << endl; // OUTPUT >> 100

    // Ögeleri Silme
    sayilar.pop();
    cout << sayilar.top() << endl; // OUTPUT >> 40

    // Yığının Boyutunu Öğrenme
    cout << sayilar.size() << endl; // OUTPUT >> 4

    // Yığının Boş olup olmadığını kontrol etme
    cout << sayilar.empty() << endl; // OUTPUT >> 0 (sayilar is not empty)

    return 0;
}