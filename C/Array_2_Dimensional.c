#include <stdio.h>
#include <string.h>
// regular array aka one dimensional array
// one dimensional arrays have one column of elements.
int main() {
    int a[4]; // initialize the array
    a[0] = 1;
    a[1] = 2;
    a[2] = 3;
    a[3] = 4;

    // int i; // initialize i
    // for (i = 0; i < 5; i++) // loop
    // {
    //     printf("%d\n",a[i]); // print index i of array every loop iteration. ex: if i = 0 then a[i] == a[0] which will print 1. 
    // }
    
    // // Two dimensional array
    // // Two dimensional arrays have rows, and columns, much like an x axis and y axis.
    // int b[2][2], i, j;
    // for (i = 0; i < 2; i++)
    // {
    //     for (j = 0; i < 4; j++)
    //     {
    //         printf("a[%d][%d] = %d\n", i, j, a[i][j]);
    //     }
    
    // }

    int grades[2][5];
    int i,j;
    grades[0][0] = 85;
    grades[0][1] = 86;
    grades[0][2] = 87;
    grades[0][3] = 88;
    grades[0][4] = 89;

    grades[1][0] = 90;
    grades[2][1] = 91;
    grades[3][2] = 92;
    grades[4][3] = 93;
    grades[5][4] = 94;

    printf("%d",a[][i]); // not sure why this is asking for a pointer reference? hmm *thinking hard*
}