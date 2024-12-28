#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
#include <iomanip>

void printCentered(const std::string& text) {
    int screenWidth = 80; // Szerokość konsoli (dostosuj do swojej konsoli, jeśli inna)
    int textWidth = text.length();
    int padding = (screenWidth - textWidth) / 2;

    std::cout << std::setw(padding + textWidth) << std::right << text << std::endl;
}

int main() {
    const int minNumber = 1;
    const int maxNumber = 49;
    const int numbersToGenerate = 6;

    // Inicjalizacja generatora liczb pseudolosowych
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    std::vector<int> numbers;

    // Wypełnienie wektora liczbami od minNumber do maxNumber
    for (int i = minNumber; i <= maxNumber; ++i) {
        numbers.push_back(i);
    }

    // Przetasowanie wektora, aby liczby były w losowej kolejności
    std::random_shuffle(numbers.begin(), numbers.end());

    // Wyświetlenie napisu "Losowe liczby w LOTTO" centralnie na ekranie
   std::cout << "Losowe liczby w LOTTO\n";

    // Wyświetlenie wylosowanych liczb centralnie pod napisem
    for (int i = 0; i < numbersToGenerate; ++i) {
        std::cout << std::setw(4) << numbers[i];
    }
    std::cout << std::endl;

    return 0;
}