#include <iostream>
#include <string>

using namespace std;

//! İstisnalar - Exceptions

int main()
{

    // Try-Catch

    try
    {
        int password;
        cout << "Enter Password: ";
        cin >> password;
        if (password == 145367)
        {
            cout << "Giriş Yapıldı!";
        }
        else
        {
            // ! bir sorun algılandığında bir istisna fırlatır ve bu da bize özel bir hata oluşturma olanağı sağlar.
            throw(password);
        }
    }
    catch (int password)
    {
        // ! try bloğunda bir hata oluşması durumunda yürütülecek kod bloğunu tanımlamanıza olanak tanır.
        cout << "Access Denied! Incorrect Password!" << endl;
        cout << password;
    }

    return 0;
}