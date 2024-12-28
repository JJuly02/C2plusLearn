#include <iostream>

using namespace std;

int main ()
{
    int tabliczkamnozenia[101][101];
    int i, j, n;
    cout << " podaj zakres tabliczki mnozenia przez ";
    cin >> n;   cin.ignore();

    for (i = 1; i <= n; ++i)
        for (j = 1; j <= n; ++j)
            tabliczkamnozenia[i][j]= i * j;
    i = 1;
    do
    {
        j= 1;
        do
        {
            std::cout.width(4);
            std::cout << right << tabliczkamnozenia[i][j];
            ++j;
    }
    while (j <= n);
    ++i;
    std: cout << endl;
    }
    while (i <= n);

}