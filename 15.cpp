#include <iostream>

using namespace std;

int main ()
{
    int liczbylosowe[1001];
    int i, maxi, gdziemaxi, mini, gdziemini;
    srand(time(NULL));
    for (int i = 1; i <= 1000; i++)
        liczbylosowe[i] = 1 + (rand() % 10000);

    maxi = 0;
    mini = 10001;
    gdziemaxi = 0;
    gdziemini = 0;

    for (int i = 1; i <= 1000; i++)
        {
            if (liczbylosowe[i] > maxi)
             {
                maxi = liczbylosowe[i];
                gdziemaxi = i;
             };
            if (liczbylosowe[i] < mini)
            {
                mini = liczbylosowe[i];
                gdziemini = i;
            };
        };
    std::cout << "maximum =";
    std::cout.width(6); std::cout << right << maxi;
    std::cout << " pozycja maximum = ";
    std::cout.width(5); std::cout << right << gdziemaxi << endl;

    std::cout << "minimum = ";
    std::cout.width(6); std::cout << right << mini;
    std:cout << " pozycja minimum = ";
    std::cout.width(5); std::cout << right << gdziemini << endl;
}