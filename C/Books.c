#include <stdio.h>
#include <string.h>

struct Books
{
    char title[50];
    char author[50];
    char subject[50];
    char book_id;
};


int a[5][2] = {{0,0}, {1,2}, {3,6}, {4,8}};
int numbers[10];
int main() {
    struct Books Book1;
    struct Books Book2;

    char str1[20] = "Hello0o0o0o0o0o0o ";
    char str2[25] = "Marshall Livingston";
    char str3[12] = "terminal";
    printf("%s from %s's %s\n",str1, str2, str3);
    // printf(strcat(str1,str2));

    // Book 1 specificaitons
    strcpy(Book1.title, "Amazing Spiderman");
    strcpy(Book1.author, "Tom Welling");
    strcpy(Book1.subject, "eat assery");
    Book1.book_id = 001;

    printf("Book 1 title is: %s", Book1.title);
    // int a = 0, b = 1, c = 2, d = 3, e = 4;
    // for (int i = 0; i < 5; i++) {
    //     for (int j = 0; j < 3; j++) {
    //         printf("a[%d][%d] = %d\n", i, j, a[i][j]);
    //     }
        
    // }
    return 0;
}