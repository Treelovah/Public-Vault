#include <iostream>
#include <string.h>
#include <cstdio>

using namespace std;

int check_pass(char *password)
{
    char mypass[10]{ "PASSWORD1" };
    if (strcmp(password, mypass) != 0) return 1;
    return 0;
}

int main(int argc, char *argv[])
{
    if (argc != 2) cout << "Help:\n" << argv[0] << " <password>\n";
    else
    {
        int reply{ check_pass(argv[1]) };

        if (reply == 1) cout << "[!] Incorrect Password" << endl;
        else cout << "[+] Correct Password" << endl; 
    }
    return 0;
}
