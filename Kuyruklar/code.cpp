#include <iostream>
#include <string>
#include <queue>

using namespace std;

//! Kuyruklar - Queues

int main()
{

    // Bir Kuyruk Oluşturma

    queue<string> jobs;
    //! Kuyruğun türü (örneğimizde string) bildirildikten sonra değiştirilemez.

    //! Vektörlerde olduğu gibi, bildirim anında kuyruğa eleman ekleyemezsiniz :
    //!  queue<string jobs = {"Engineer","Farmer","Doctor"}; -> ERROR!

    // Öğeleri Ekleyelim
    jobs.push("Engineer");
    jobs.push("Farmer");
    jobs.push("Doctor");
    jobs.push("Nurse");

    // Kuyruk ELemanlarına Erişme
    cout << jobs.front() << endl;
    cout << jobs.back() << endl;

    // Ön ve Arka elemanları değiştirme
    jobs.front() = "Teacher";
    jobs.back() = "Lawyer";
    cout << jobs.front() << endl;
    cout << jobs.back() << endl;

    // Öğeleri Silme
    jobs.pop(); // Bu, ön öğeyi (kuyruğa eklenen ilk ve en eski öğe) kaldıracaktır
    cout << jobs.front() << endl;

    // Bir kuyruğun boyutunu öğrenme
    cout << jobs.size() << endl;

    // Kuyruğun boş olup olmadığını kontrol edelim.
    cout << jobs.empty() << endl; // OUTPUT >> 0 (jobs is not empty)

    return 0;
}