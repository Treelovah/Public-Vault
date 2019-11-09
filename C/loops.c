#include <stdio.h>

#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n'

int main() {
    int i;
    for (int i = 0; i < LENGTH; i++)
    {
        printf("%d\n",i);
    }
    return 0;
}

// #include <stdio.h>

// #define LENGTH 10   
// #define WIDTH  5
// #define NEWLINE '\n'

// int main() {
//    int area;  
  
//    area = LENGTH * WIDTH;
//    printf("value of area : %d", area);
//    printf("%c", NEWLINE);

//    return 0;
// }

// int main() {
//     const unsigned int LENGTH = 10;
//     const unsigned int WIDTH = 5;
//     const char NEWL = '\n';

//     int area = LENGTH * WIDTH;
//     printf("The area of the object is: %d%c",area,NEWL);
//     return 0;
// }   