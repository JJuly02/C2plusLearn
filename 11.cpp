#include <iostream>

using namespace std;

int main ()
{
    int liczbypodane[101];
    int i, liczba, ileliczb;
    float srednia;
    for (i = 0; i <= 100; i++)
    liczbypodane[i] = 0;
    liczba = 0;
    i = 1;

    do
    {
        std::cout << "Podaj liczbe nr " <<i <<" ";
        std::cin >> liczba;     cin.ignore();
        liczbypodane[i] = liczba;   ++i;
    }
    while ((liczba != 0) && (i <= 100));
    ileliczb = i - 2;
    std: cout << "ile bylo liczb --> " << ileliczb << endl;
    srednia = 0;
    for (i = 1; i <= 100; ++i)
    {
        if (liczbypodane[i] > 0)
        std::cout << liczbypodane[i] << " ";
        srednia = srednia + liczbypodane[i];
    };

    srednia = 1.00 * srednia / ileliczb;
    std::cout << endl << endl <<"srednia =" << srednia << endl;

}