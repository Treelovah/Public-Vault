#include <stdio.h>
#include <string.h>

// int main () {

//    int  var = 20;   /* actual variable declaration */
//    int  *ip;        /* pointer variable declaration */

//    ip = &var;  /* store address of var in pointer variable*/

//    printf("Address of var variable: %x\n", &var  );

//    /* address stored in pointer variable */
//    printf("Address stored in ip variable: %x\n", ip );

//    /* access the value using the pointer */
//    printf("Value of *ip variable: %d\n", *ip );

//    return 0;
// }
#define VAR1 1
#define VAR2 2
double result;
int max(int var1, int var2);
int main() {
   printf("%d",max(VAR1, VAR2));
    return 0;
}

int max(int var1, int var2) {
    if (var1 < var2)
    {
        return 0;
    }
    else
    {
        return 1;
    }
    
    
}
// int integer1() {
//     int var1 = 10;
//     int *var2;
//     var2 = &var1;
//     printf("Address of var variable: %x\n", &var1);
//     printf("Address stored in var2 variable: %x\n", var2);
//     printf("Value of *var2 variable: %d, while the value of var is also %d\n", *var2, var1);
// }