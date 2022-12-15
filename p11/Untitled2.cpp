#include <iostream>
using namespace std;
void pangkat(int x, int y);
void faktorial(int angka, int x);
void perulangan(int a);
int a, il, j, x, y, angka;

int main()

{
    int pilih;
    do
    {
        system("cls");
        cout << "MENU : " << endl;
        cout << "1.Faktorial " << endl;

        cout << "Masukan Pilihan Anda : ";
        cin >> pilih;

        switch (pilih)
        {
        case 1:
        {
            cout << "Masukan Angka : ";
            cin >> angka;
            faktorial(angka, x);
            break;
        }
        default:
            cout << "\nMaaf, Pilihan Tidak Tersedia.\n";
        }
        cout << "\nLagi? : ";
        cin >> x;
    } while (x < 4);
}
void faktorial(int angka, int x)
{

    int faktor = 1;
    for (int i = 1; i <= angka; ++i)
    {
        faktor *= i;
    }
    cout << faktor;
}
