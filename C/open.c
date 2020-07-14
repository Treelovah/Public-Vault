#define _GNU_SOURCE
#include <stdio.h>

int main(void)
{
	FILE *fp;
	char *line = NULL;
	size_t len = 0;
	ssize_t read;
	
	fp = fopen("/etc/motd", "r");
	while ((read = getline(&line,&len,fp)) != -1)
	{
		printf("%s",line);
	}
}
