#include <iostream>
#include <bitset>
#include <string>

int main() {
    int number;

    std::cout << "Podaj liczbę dziesiętną: ";
    std::cin >> number;

    if (number < 0 || number > 65535) {
        std::cout << "Podana liczba jest spoza zakresu." << std::endl;
        return 1;
    }

    std::bitset<16> binary(number);
    std::string binaryString = binary.to_string();

    // Dodaj spacje co 8 zer
    for (int i = binaryString.length() - 8; i > 0; i -= 8) {
        binaryString.insert(i, " ");
    }

    std::cout << "Postać binarna: " << binaryString << std::endl;

    return 0;
}