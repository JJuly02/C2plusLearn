#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main ()
{
    int a[3], b[3], c[3];
    int i, j, k, l;

    // Generowanie liczb pseudolosowych aktualnym czasem
    srand(time(0));

    // Generowanie losowych liczb w zbiorach a, b, c
    for (i = 0; i < 3; i++)
    {
        a[i] = rand() % 5 + 1;
    }

    for (i = 0; i < 3; i++)
    {
        b[i] = rand() % 15 - 7;
    }

    for (i = 0; i < 3; i++)
    {
        c[i] = rand() % 21 - 10;
    };

    // Szerokość kolumn
    const int szerokosc_kolumny1 = 15;
    const int szerokosc_kolumny2 = 20;
    const int szerokosc_kolumny3 = 25;

    // Drukowanie tabeli z wartosciami zbiorów
    cout << setw(szerokosc_kolumny1) << "a1= " << a[0] << setw(szerokosc_kolumny2) << "a2= " << a[1] << setw(szerokosc_kolumny3) << "a3= " << a[2] << endl;
    cout << setw(szerokosc_kolumny1) << "b1= " << b[0] << setw(szerokosc_kolumny2) << "b2= " << b[1] << setw(szerokosc_kolumny3) << "b3= " << b[2] << endl;
    cout << setw(szerokosc_kolumny1) << "c1= " << c[0] << setw(szerokosc_kolumny2) << "c2= " << c[1] << setw(szerokosc_kolumny3) << "c3= " << c[2] << endl;

   // Drukowanie oddzielenia
   for (j = 0; j < szerokosc_kolumny1 + szerokosc_kolumny2 + szerokosc_kolumny3 + 6 ; j++)
    {
        cout << "-";
    }

    // Argumenty "x"
    const int wielkosc = 21;
    int x[wielkosc];
    for (k = -10; k <= 10; k++)
    {
        x[k + 10] = k;
    }
    cout << "\n";

    // Drukowanie argumentow z wynikami
    for (l = 0; l < wielkosc; l++)
    {
        cout << x[l] << setw(szerokosc_kolumny1) << "wynik1 " << a[0] * x[l] * x[l] + b[0] * x[l] + c[0]  << setw(szerokosc_kolumny2) << "wynik2 " << a[1] * x[l] * x[l] + b[1] * x[l] + c[1] << setw(szerokosc_kolumny3) << "wynik3 " << a[2] * x[l] * x[l] + b[2] * x[l] + c[2] << endl;
    }
    cout << endl;


   return 0;
}