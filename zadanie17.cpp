#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    const int angleStep = 10;
    const int maxAngle = 360;

    std::cout.width(10);
    std::cout.precision(4);

    std::cout << std::setw(10) << "Kąt" << std::setw(10) << "Sius" << std::setw(10) << "Cosinus" << std::setw(10) << "Tangens" << std::endl;

    for (int angle = 10; angle <= maxAngle; angle += angleStep) {
        double radians = angle * M_PI / 180.0;
        double sine = std::sin(radians);
        double cosine = std::cos(radians);
        double tangent = std::tan(radians);

        std::cout << std::setw(10) << angle << std::setw(10) << std::fixed << sine << std::setw(10) << std::fixed << cosine << std::setw(10) << std::fixed << tangent << std::endl;
    }

    return 0;
}