#include <stdio.h>
#include <strings.h>

void squeeze(char s[], int c);

int main()
{
    char arr[7] = "heello";
    printf("%s\n",arr);
    squeeze(arr, 'e');
    return 0;
}

void squeeze(char *str, int c)
{
    /* delete all appearences in str[] of int c */
    int i, j;
    for (i = j = 0; str[i] != '\0'; i++)
    {
        if (str[i] != c)
        {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}