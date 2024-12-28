#include <iostream>

bool isPythagoreanTriplet(int a, int b, int c) {
    // Sprawdzenie warunku tworzenia trójkąta pitagorejskiego: a^2 + b^2 = c^2
    return (a * a + b * b == c * c) || (b * b + c * c == a * a) || (c * c + a * a == b * b);
}

int main() {
    int a, b, c;

    std::cout << "Podaj liczbę nr 1: ";
    std::cin >> a;

    std::cout << "Podaj liczbę nr 2: ";
    std::cin >> b;

    std::cout << "Podaj liczbę nr 3: ";
    std::cin >> c;

    if (isPythagoreanTriplet(a, b, c)) {
        std::cout << "Podane liczby tworzą trójkąt pitagorejski." << std::endl;
    } else {
        std::cout << "Podane liczby nie tworzą trójkąta pitagorejskiego." << std::endl;
    }

    return 0;
}