#include <iostream>
#include <fstream>

using namespace std;

//! Dosya işlemleri - File Operations

/***
 *! fstream Kütüphanesinde dosya oluşturmak, yazmak veya okumak için kullanılan üç sınıf bulunmaktadır :
 ** 1-ofstream: Dosya oluşturur ve dosyalara yazar.
 ** 2-ifstream: Dosyalardan okur.
 ** 3-fstream: ofstream ve ifstream'in bir kombinasyonu: dosyaları oluşturur, okur ve yazar.
*/

int main()
{
    // ! Bir Dosya Oluşturalım ve Dosyaya Yazalım.
    // Dosyayı Oluşturalım
    ofstream MyFile("secret.txt");

    // Dosyaya Yazalım.
    MyFile << "Hello My Friend!";

    // Dosyayı kapatalım.
    MyFile.close();

    // ! Bir Dosyayı Okuyalım.
    // Bir Text oluşturalım
    string myText;

    // Dosyadaki yazıyı okuyalım.
    ifstream MyReadFile("secret.txt");

    // Döngü ve getline() ile birlikte satır satır okuyalım
    while (getline(MyReadFile, myText))
    {
        cout << myText;
    }

    // Dosyayı kapatalım.
    MyReadFile.close();

    return 0;
}