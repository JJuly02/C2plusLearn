#include <iostream>

using namespace std;

int main ()
{
    int liczbypodzielne[101];
    int i, a, b, k, numerek;
    cout << "początek przedziału ";
    cin >> a;
    cout << "koniec przedziału ";
    cin >> b;
    cout << "podzielnik ";
    cin >> k;

    for (i = 0; i <= 100; i++)
    liczbypodzielne[i] = 0;

    numerek = 1;
    for (i = a; i <= b; i++)
    if(i % k == 0)
    {
        liczbypodzielne[numerek] = i;
        numerek++;
    }

    for (i = 1; i < 100; i++)
        if(liczbypodzielne[i] > 0)
            std::cout<<liczbypodzielne[i] << ".";

    std::cout << "\n";
}