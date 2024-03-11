#include <iostream>
#include <chrono>
#include <ctime>

int days_from_new_year(int year, int month, int day) {
    std::tm new_year = {0, 0, 0, 1, 0, year - 1900}; // 1/1/yyyy
    std::tm input_date = {0, 0, 0, day, month - 1, year - 1900}; // input date

    auto new_year_time = std::chrono::system_clock::from_time_t(std::mktime(&new_year));
    auto input_date_time = std::chrono::system_clock::from_time_t(std::mktime(&input_date));

    return std::chrono::duration_cast<std::chrono::hours>(input_date_time - new_year_time).count() / 24;
}

int main() {
    int year, month, day;
    std::cout << "Enter year: ";
    std::cin >> year;
    std::cout << "Enter month: ";
    std::cin >> month;
    std::cout << "Enter day: ";
    std::cin >> day;

    int days = days_from_new_year(year, month, day);
    std::cout << "Days from New Year: " << days << std::endl;

    return 0;
}