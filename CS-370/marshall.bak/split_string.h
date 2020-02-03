#include <iostream>
#include <string>
#include "leap_year.h"

// get input from user
void get_input() {
    void split_string(std::string data);
    std::string user_input {};
    while(std::getline(std::cin, user_input)) {
        split_string(user_input);
    }
}

// convert string_int data to proper year, month, and day
void proper_date(std::string str_year, std::string str_day) {
    void cleanup(std::string date);
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
    cleanup(date);
}

// convert string to int
void split_string(std::string data) {
    void proper_date(std::string str_year, std::string str_day);
    char delim {'.'};
    int year {stoi(data.substr(0, data.find(delim)))};
    int day {stoi(data.substr(data.find(delim), -1).erase(0, 1))};
    std::string str_day {std::to_string(day)};
    std::string str_year {std::to_string(year)};
    proper_date(str_year, str_day);
}

//math
void cleanup(std::string date) {
    constexpr int months[12] {31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};
    constexpr int lmonths[12] {31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335, 366};
    std::string month {};
    std::string weekday {};
    constexpr char delim {'.'};
    int year {stoi(date.substr(0, date.find(delim)))};
    int day {stoi(date.substr(date.find(delim), -1).erase(0, 1))};
    //check if leap year
    if (!leap_year(year)) {
        // go through regular year list
        if (day > 0 && day <= months[0]) {
            month = "Jan";
            day = day;
        } else if (day > months[0] && day <= months[1]) {
            month = "Feb";
            day = day % months[0];
        } else if (day > months[1] && day <= months[2]) {
            month = "Mar";
            day = day % months[1];
        } else if (day > months[2] && day <= months[3]) {
            month = "Apr";
            day = day % months[2];
        } else if (day > months[3] && day <= months[4]) {
            month = "May";
            day = day % months[3];
        } else if (day > months[4] && day <= months[5]) {
            month = "Jun";
            day = day % months[4];
        } else if (day > months[5] && day <= months[6]) {
            month = "Jul";
            day = day % months[5];
        } else if (day > months[6] && day <= months[7]) {
            month = "Aug";
            day = day % months[6];
        } else if (day > months[7] && day <= months[8]) {
            month = "Sep";
            day = day % months[7];
        } else if (day > months[8] && day <= months[9]) {
            month = "Oct";
            day = day % months[8];
        } else if (day > months[9] && day <= months[10]) {
            month = "Nov";
            day = day % months[9];
        } else if (day > months[10] && day <= months[11]) {
            month = "Dec";
            day = day % months[10];
        }
    } else {
        // go through leap_year list
        if (day > 0 && day <= lmonths[0]) {
            month = "Jan";
            day = day;
        } else if (day > lmonths[0] && day <= lmonths[1]) {
            month = "Feb";
            day = day % months[0];
        } else if (day > lmonths[1] && day <= lmonths[2]) {
            month = "Mar";
            day = day % lmonths[1];
        } else if (day > lmonths[2] && day <= lmonths[3]) {
            month = "Apr";
            day = day % lmonths[2];
        } else if (day > lmonths[3] && day <= lmonths[4]) {
            month = "May";
            day = day % lmonths[3];
        } else if (day > lmonths[4] && day <= lmonths[5]) {
            month = "Jun";
            day = day % lmonths[4];
        } else if (day > lmonths[5] && day <= lmonths[6]) {
            month = "Jul";
            day = day % lmonths[5];
        } else if (day > lmonths[6] && day <= lmonths[7]) {
            month = "Aug";
            day = day % lmonths[6];
        } else if (day > lmonths[7] && day <= lmonths[8]) {
            month = "Sep";
            day = day % lmonths[7];
        } else if (day > lmonths[8] && day <= lmonths[9]) {
            month = "Oct";
            day = day % lmonths[8];
        } else if (day > lmonths[9] && day <= lmonths[10]) {
            month = "Nov";
            day = day % lmonths[9];
        } else if (day > lmonths[10] && day <= lmonths[11]) {
            month = "Dec";
            day = day % lmonths[10];
        }
        else {
            std::cerr << "Day is out of bounds. please adjust";
        }
    }
    std::string final_year {std::to_string(year)};
    std::string final_day {std::to_string(day)};
    if (final_year.length() < 4) {
        for (int i = final_year.length(); i < 4; i++) {
            final_year = "0" + final_year;
        }
    } else if (final_year.length() > 9999 || final_year.length() < 1) {
        std::cerr << "Year is out of bounds";
    }
    if (final_day.length() < 2) {
        for (int i = final_day.length(); i < 2; i++) {
            final_day = "0" + final_day;
        }
    } else if ( final_day.length() > 9999 || final_day.length() < 2) {
        std::cerr << "Day is out of bounds";
    }
    std::cout << weekday << ' ' << final_day << ' ' << month << ' ' << final_year << '\n';
}