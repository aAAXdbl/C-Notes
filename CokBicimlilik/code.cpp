#include <iostream>
#include <string>

using namespace std;

//! Çok Biçimlilik - Polymorphism

class GunSoundLevels
{
public:
    void sesSeviyesi()
    {
        cout << "Ses Seviyesi Burada Gösterilir" << endl;
    }
};
class Pistol : public GunSoundLevels
{
public:
    void sesSeviyesi()
    {
        cout << "Düşük Ses Seviyesi" << endl;
    }
};
class AK_47 : public GunSoundLevels
{
public:
    void sesSeviyesi()
    {
        cout << "Orta Ses Seviyesi" << endl;
    }
};
class Barrett_M82 : public GunSoundLevels
{
public:
    void sesSeviyesi()
    {
        cout << "Yüksek Ses Seviyesi" << endl;
    }
};

int main()
{

    GunSoundLevels gunSoundLevels;
    Pistol pistol;
    AK_47 ak_47;
    Barrett_M82 barrettM82;

    gunSoundLevels.sesSeviyesi();
    pistol.sesSeviyesi();
    ak_47.sesSeviyesi();
    barrettM82.sesSeviyesi();

    return 0;
}