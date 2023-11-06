/*
 *      Author: MaksiKutrolli
 */

#include "Date.h"

#include <iostream>

Date::Date() {
    day = 1;
    month = 1;
    year = 1970;
}

Date::Date(int day, int month, int year) {
    this->day = day;
    this->month = month;
    this->year = year;
}

int Date::getDay() {
    return day;
}

int Date::getMonth() {
    return month;
}

int Date::getYear() {
    return year;
}

void Date::display() {
    std::cout << day << "/" << month << "/" << year << std::endl;
}
