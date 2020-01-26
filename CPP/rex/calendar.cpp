#include <iostream>
#include <string>
#include <fstream>

// int year[] {31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};
// int leap_year[] {31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335, 366};

// int date_test() {
//     for (int month : year) {
//         std::cout << month << "\n";
//     }
//     for (int month : leap_year) {
//         std::cout << month << "\n";
//     }
//     return 0;
// }

//check if leapYear

int date_test2() {
    std::ifstream inf("data.txt");
    while (inf) {
        std::string strInput;
        std::string delimiter {'.'};
        getline(inf, strInput);
        std::string first {strInput.substr(0, strInput.find(delimiter))};
        int i, c = -1;
        for (i = 0; i < first.length(); i++) {
            if (first[i] != '0') {
                c = i;
            }
        }
        std::cout << first << "\n";
    }
    return 0;
}