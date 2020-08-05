/*

    string s = lowercase letters
    string new_s = "";
    int a = num_of_a's
    int n = length of char repeated
    int count;

    ex: 
        s = 'abcac'
        n = 10

        string to analyze will be abcacabcac
        find a's

solution
    
    1. loop through string of chars N times and append them to an new string
        for (int i = 0; i < n ; i++)
        {
            new_s.push_back(s.at(i))
        }
    
    2. find amount of a's in new string.
        loop through new string, cout++ for found a;
    3. print num of a's

flag = true

while flag:
    

*/

#include <bits/stdc++.h>



long repeat_string(std::string s, long n) {
    long count{ 0 };
    std::string new_str{ "" };
    unsigned long divisor{ n / s.length() };
    unsigned long remainder{ n % s.length() };
    bool flag;
    int i;
    
    if (s.size() == 1 && s.at(0) == 'a') return n;
    flag = s.size() >= 1 && s.size() <= 100 ? true : false;
    
    if (flag)
    {
        if (n >=1 && n <= pow(10,12)) 
        {
            if (n > s.length())
            {
                for (char ch : s)
                {
                    if (ch == 'a')
                    {
                        count++;
                    }
                }
                count*=divisor;
                if (remainder > 0)
                {
                    for (int i = 0; i < remainder; i++)
                    {
                        if (s.at(i) == 'a') count++;
                    }
                }
            } else
            {
                for (int i = 0; i < remainder; i++)
                {
                    if (s.at(i) == 'a') count++;
                }
            }
        }
    }
    return count;  
}

int main(int argc, char const *argv[])
{
    std::string s;
    long unsigned n;
    getline(std::cin, s);
    std::cin >> n;

    std::cout << repeat_string(s, n) << std::endl;
    return 0;
}
