#include <iostream>
#include <string>
#include "split_string.h"

// convert string to int
int split_string(std::string data) {
    // int proper_date(std::string str_year, std::string str_day);
    char delim {'.'};
    int year {stoi(data.substr(0, data.find(delim)))};
    int day {stoi(data.substr(data.find(delim), -1).erase(0, 1))};
    std::string str_day {std::to_string(day)};
    std::string str_year {std::to_string(year)};
    proper_date(str_year, str_day);
    return 0;
}

// convert string_int data to proper year, month, and day
int proper_date(std::string str_year, std::string str_day) {
    void get_date(std::string date);
    if (str_year.length() < 4) {
        for (int i = str_year.length(); i < 4; i++) {
            str_year = "0" + str_year;
        }
    } else if (str_year.length() > 9999 || str_year.length() < 1) {
        std::cerr << "Year is out of bounds";
    }
    if (str_day.length() < 4) {
        for (int i = str_day.length(); i < 4; i++) {
            str_day = "0" + str_day;
        }
    } else if ( str_day.length() > 9999 || str_day.length() < 1) {
        std::cerr << "Day is out of bounds";
    }
    std::string date = str_year.append('.' + str_day);
    get_date(date);
    return 0;
}

