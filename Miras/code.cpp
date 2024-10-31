#include <iostream>
#include <string>

using namespace std;

//! Miras - Inheritance

class Math
{
public:
    int sayi1;
    int sayi2;
};
class Sum : public Math
{
public:
    void sum(int s1, int s2)
    {
        sayi1 = s1;
        sayi2 = s2;
        cout << "Toplam: " << sayi1 + sayi2 << endl;
    }
};
class Extraction : public Math
{
public:
    void extraction(int s1, int s2)
    {
        sayi1 = s1;
        sayi2 = s2;
        cout << "Fark: " << sayi1 - sayi2 << endl;
    }
};
class Multiply : public Math
{
public:
    void multiply(int s1, int s2)
    {
        sayi1 = s1;
        sayi2 = s2;
        cout << "Çarpma: " << sayi1 * sayi2 << endl;
    }
};
class Divide : public Math
{
public:
    void divide(int s1, int s2)
    {
        sayi1 = s1;
        sayi2 = s2;
        cout << "Bölme: " << sayi1 / sayi2 << endl;
    }
};

// * Çok Seviyeli Miras
class BaseClass
{
public:
    void baseFunction()
    {
        cout << "Base Class Function" << endl;
    }
};
class LowerClass : public BaseClass
{
};
class LowestClass : public LowerClass
{
};

// * Çoklu Kalıtım
class Yetenekler
{
public:
    string yetenekAdi;
    string yetenekAlani;
    string yetenekSeviyesi;
    void yetenekBilgisi()
    {
        cout << "Yetenek Adı: " << yetenekAdi << endl;
        cout << "Yetenek Alanı: " << yetenekAlani << endl;
        cout << "Yetenek Seviyesi: " << yetenekSeviyesi << endl;
    }
};
class Unvanlar
{
public:
    string unvanAdi;
    string unvanAlani;
    void unvanBilgisi()
    {
        cout << "Ünvan Adı: " << unvanAdi << endl;
        cout << "Ünvan Alanı: " << unvanAlani << endl;
    }
};

class Calisan : public Yetenekler, public Unvanlar
{
public:
    string calisanAdi;
    string calisanSoyadi;
    int calisanNo;
    void calisanBilgisi()
    {
        cout << "Çalışan Adı: " << calisanAdi << endl;
        cout << "Çalışan Soyadı: " << calisanSoyadi << endl;
        cout << "Çalışan No: " << calisanNo << endl;
    }
};

// * Erişim Belirleyiciler - Access Specifiers
// * 3.Erişim Belirleyici Olan Protected, Private gibidir ancak miras alınarak erişilebilir.
class WorkerInformation
{
public:
    string workerName;
    string workerSurname;

protected:
    int workerNo = 3;
};
class Worker : public WorkerInformation
{
public:
    void workerInfo()
    {
        cout << "Worker Name: " << workerName << endl;
        cout << "Worker Surname: " << workerSurname << endl;
        cout << "Worker No: " << workerNo << endl;
    }
};

int main()
{

    while (true)
    {
        string islem;
        int sayi1;
        int sayi2;

        cout << "1.Sayıyı Giriniz: ";
        cin >> sayi1;
        cout << "2.Sayıyı Giriniz: ";
        cin >> sayi2;
        cout << "4 işlemden birini seçiniz (+ , - , x , / ): ";
        cin >> islem;

        Sum sum;
        Extraction extraction;
        Multiply multiply;
        Divide divide;

        if (islem == "+")
        {
            sum.sum(sayi1, sayi2);
            break;
        }
        else if (islem == "-")
        {
            extraction.extraction(sayi1, sayi2);
            break;
        }
        else if (islem == "*")
        {
            multiply.multiply(sayi1, sayi2);
            break;
        }
        else if (islem == "/")
        {
            divide.divide(sayi1, sayi2);
            break;
        }
        else
        {
            cout << "Hatalı Giriş! Lütfen Tekrar Deneyiniz!" << endl;
        }
    }

    // * Çok Seviyeli Miras
    LowestClass lowestClass;
    lowestClass.baseFunction();

    // * Çoklu Kalıtım
    Calisan calisan;
    calisan.calisanAdi = "GhoST";
    calisan.calisanSoyadi = "Unknown";
    calisan.calisanNo = 3;
    calisan.yetenekAdi = "C++";
    calisan.yetenekAlani = "Yazılım";
    calisan.yetenekSeviyesi = "Temel Seviye";
    calisan.unvanAdi = "Junior Geliştirici";
    calisan.unvanAlani = "Yazılım";

    calisan.calisanBilgisi();
    calisan.yetenekBilgisi();
    calisan.unvanBilgisi();

    // * Erişim Belirleyiciler - Access Specifiers
    Worker worker;
    worker.workerName = "GhoST";
    worker.workerSurname = "Unknown";
    worker.workerInfo();

    return 0;
}