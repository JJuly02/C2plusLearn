#include <iostream>
#include <string>

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

bool isDate1Earlier(const std::string& date1, const std::string& date2) {
    int year1 = std::stoi(date1.substr(0, 4));
    int month1 = std::stoi(date1.substr(5, 2));
    int day1 = std::stoi(date1.substr(8, 2));

    int year2 = std::stoi(date2.substr(0, 4));
    int month2 = std::stoi(date2.substr(5, 2));
    int day2 = std::stoi(date2.substr(8, 2));

    if (year1 < year2) {
        return true;
    } else if (year1 > year2) {
        return false;
    }

    if (month1 < month2) {
        return true;
    } else if (month1 > month2) {
        return false;
    }

    if (day1 < day2) {
        return true;
    } else {
        return false;
    }
}

int main() {
    std::string date1, date2;

    std::cout << "Podaj pierwszą datę (rrrr-mm-dd): ";
    std::cin >> date1;

    std::cout << "Podaj drugą datę (rrrr-mm-dd): ";
    std::cin >> date2;

    if (!isDateValid(date1) || !isDateValid(date2)) {
        std::cout << "Podane daty są nieprawidłowe." << std::endl;
        return 1;
    }

    if (isDate1Earlier(date1, date2)) {
        std::cout << "Pierwsza data (" << date1 << ") jest starsza." << std::endl;
    } else {
        std::cout << "Druga data (" << date2 << ") jest starsza." << std::endl;
    }

    return 0;
}