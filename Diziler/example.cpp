#include <iostream>

using namespace std;

//! Diziler - Arrays

int main()
{

    //! BATTLESHIP GAME

    bool ships[4][4] = {
        {0, 1, 1, 0},
        {0, 0, 0, 0},
        {0, 1, 0, 0},
        {0, 0, 1, 0}};

    int hits = 0;
    int numberOfTurns = 0;

    while (hits < 4)
    {
        int row, column;
        cout << "0 ile 3 arası Satır Giriniz : ";
        cin >> row;
        cout << "0 ile 3 arası Sütun Giriniz : ";
        cin >> column;

        if (ships[row][column])
        {
            ships[row][column] = 0;
            cout << "Vuruldu!" << endl;
            hits++;
            cout << "Kalan Gemi: " << (4 - hits) << endl;
        }
        else
        {
            cout << "Vurulamadı!" << endl;
        }

        numberOfTurns++;
    }

    cout << "Kazandınız!" << endl;
    cout << "Toplam Atış Sayısı : " << numberOfTurns << endl;

    return 0;
}