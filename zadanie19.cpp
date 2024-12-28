#include <iostream>
#include <cmath>

int main() {
    double pi = M_PI;                 // Stała Pi
    double sqrt2 = std::sqrt(2.0);    // Pierwiastek z 2
    double ln2 = std::log(2.0);       // Ln(2) - logarytm naturalny z 2
    double euler = std::exp(1.0);     // Liczba Eulera (e)

    std::cout << "Pi: " << pi << std::endl;
    std::cout << "Pierwiastek z 2: " << sqrt2 << std::endl;
    std::cout << "Ln(2): " << ln2 << std::endl;
    std::cout << "Liczba Eulera (e): " << euler << std::endl;

    return 0;
}