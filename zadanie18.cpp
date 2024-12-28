#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    const int argStart = 0;
    const int argEnd = 100;

    std::cout.width(10);
    std::cout.precision(4);

    std::cout << std::setw(10) << "Argument" << std::setw(10) << "ln" << std::setw(10) << "log10" << std::endl;

    for (int arg = argStart; arg <= argEnd; ++arg) {
        double lnResult = std::log(arg);
        double log10Result = std::log10(arg);

        std::cout << std::setw(10) << arg << std::setw(10) << std::fixed << lnResult << std::setw(10) << std::fixed << log10Result << std::endl;
    }

    return 0;
}