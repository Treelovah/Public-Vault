#include <iostream>
#include <fstream>
#include <string>
#include "calendar.cpp"

int main(int argc, char const *argv[])
{
    // date_test();
    date_test2();
    return 0;
}

// First things first.
// Take data from data.txt
// The input from data.txt is year.day
// So the first one sohuld be 248th day in the year 476
// needs to be based on gregorian calendar, (dow, dom, mon, yr)
// The first should be 'Fri 04 Sep 0476'

// make a 2 lists, one regular year, one leap year
// each month should hold days. (jan holds 31, feb holds 28 (except on leapyear) etc.)
// use the '.' as the delimeter to separate year from days on input
// write if/else statements to check if year is leap year or not, and if so...
// nested if/else will assign the rest of the dates

