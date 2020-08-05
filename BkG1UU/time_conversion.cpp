/*

    Given a time, such as: 4:43:22pm, convert it to military time, 
    just add 12 to everything. 
    if input is 12, output 00.
    done.


*/
#include <bits/stdc++.h>

std::string time_conversion(std::string s)
{
    size_t PM = s.find("PM");
    bool night{ PM != std::string::npos ? true : false };
    std::string hour{ s.substr(0,2) }, mili_midnight{ "00"};
    bool midnight{ hour == "12" ? true : false };

    if (!night && hour == "12") s.replace(s.begin(), s.begin()+2, mili_midnight); // if AM is found and hour is 12, make it military midnight 
    else if (night && hour != "12") s.replace(s.begin(), s.begin()+2, std::to_string(std::stoi(hour)+12)); // if PM is found and hour is above 12
    
    s.pop_back();
    s.pop_back();
    return s;
}

int main(int argc, char const *argv[])
{
    std::string str{ "12:05:45PM" };
    time_conversion(str);
    return 0;
}
