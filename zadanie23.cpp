#include <iostream>
#include <string>
#include <chrono>

bool isDateValid(const std::string& date) {
    if (date.length() != 10) {
        return false;
    }

    int year = std::stoi(date.substr(0, 4));
    int month = std::stoi(date.substr(5, 2));
    int day = std::stoi(date.substr(8, 2));

    if (year < 0 || month < 1 || month > 12 || day < 1 || day > 31) {
        return false;
    }

    return true;
}

int getDaysPassed(const std::string& date) {
    int year = std::stoi(date.substr(0, 4));
    int month = std::stoi(date.substr(5, 2));
    int day = std::stoi(date.substr(8, 2));

    std::tm timeinfo = {};
    timeinfo.tm_year = year - 1900;
    timeinfo.tm_mon = month - 1;
    timeinfo.tm_mday = day;

    std::time_t time = std::mktime(&timeinfo);
    std::time_t currentTime = std::time(nullptr);

    double secondsPassed = std::difftime(currentTime, time);
    int daysPassed = static_cast<int>(secondsPassed / (60 * 60 * 24));

    return daysPassed;
}

int main() {
    std::string date;

    std::cout << "Podaj datę (rrrr-mm-dd): ";
    std::cin >> date;

    if (!isDateValid(date)) {
        std::cout << "Podana data jest nieprawidłowa." << std::endl;
        return 1;
    }

    int daysPassed = getDaysPassed(date);

    std::cout << "Liczba dni od podanej daty do dzisiaj: " << daysPassed << std::endl;

    return 0;
}