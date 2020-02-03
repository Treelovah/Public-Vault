#ifndef LEAP_YEAR_H_INCLUDED
#ifndef SPLIT_STRING_H_INCLUDED
#define LEAP_YEAR_H_INCLUDED
#define SPLIT_STRING_H_INCLUDED

// check if leap year
bool leap_year(int year) {
    bool leap_year {(year % 4 == 0 || year % 400 == 0) ? true : false};
    return leap_year;
}

#endif
#endif