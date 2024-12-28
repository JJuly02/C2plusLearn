#include <iostream>

using namespace std;

int main ()
{
    int liczbyparzyste[101];
    int i, numerek;
    for (i = 0; i <= 100;i++)
    liczbyparzyste[i] = 0;
    numerek = 0;
    for (i = 1; i < 100; i++)
    if (i % 2 == 0)
    {
        liczbyparzyste[numerek] = i;
        numerek++;
    };
    for (i = 0; i <= 100; i++)
    if( liczbyparzyste[i] > 0)
        std :: cout << liczbyparzyste[i]<< ".";
    std :: cout << "\n";
    return 0;

}