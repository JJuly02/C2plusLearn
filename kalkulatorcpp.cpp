#include <iostream>
#include <sstream>

using namespace std;

// największy wspólny dzielnik dwóch liczb
int nwd(int a, int b) {
    if (b == 0)
        return a;
    return nwd(b, a % b);
}

// Klasa fract
class fract {
    int licznik, mianownik;

public:
    // Konstruktor
    fract(int liczn, int mian = 1) {
        int dzielnik = nwd(liczn, mian);
        licznik = liczn / dzielnik;
        mianownik = mian / dzielnik;

        if (mianownik < 0) {
            mianownik = -mianownik;
            licznik = -licznik;
        }
    }

    // dodawanie
    fract operator+(const fract &u) const {
        return fract(licznik * u.mianownik + u.licznik * mianownik, mianownik * u.mianownik);
    }

    // odejmowanie
    fract operator-(const fract &u) const {
        return fract(licznik * u.mianownik - u.licznik * mianownik, mianownik * u.mianownik);
    }

    // mnożenie
    fract operator*(const fract &u) const {
        return fract(licznik * u.licznik, mianownik * u.mianownik);
    }

    // dzielenie
    fract operator/(const fract &u) const {
        return fract(licznik * u.mianownik, mianownik * u.licznik);
    }

    // wyświetlania ułamka
    void wypiszfract() const {
        cout << licznik << "/" << mianownik << endl;
    }
};

int main() {
    char operacja;
    int licz1, mian1, licz2, mian2;

    cout << "Wprowadź wyrażenie ułamkowe w formacie: 'licz1/mian1 + licz2/mian2': ";
    cin >> licz1;
    cin.ignore(); // Ignoruje '/'
    cin >> mian1;
    cin >> operacja;
    cin >> licz2;
    cin.ignore(); // Ignoruje '/'
    cin >> mian2;

    fract fract1(licz1, mian1);
    fract fract2(licz2, mian2);
    fract wynik(0, 1);

    switch (operacja) {
    case '+':
        wynik = fract1 + fract2;
        break;
    case '-':
        wynik = fract1 - fract2;
        break;
    case '*':
        wynik = fract1 * fract2;
        break;
    case '/':
        wynik = fract1 / fract2;
        break;
    default:
        cout << "Nieprawidłowa operacja" << endl;
        return 1;
    }

    cout << "Wynik: ";
    wynik.wypiszfract();

    return 0;
}
