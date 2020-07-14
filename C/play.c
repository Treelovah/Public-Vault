#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MAXLENGTH 100
void bubble_sort(long string[], int n);

int main()
{
    long arr[MAXLENGTH], i, n;
    srand(time(NULL));

    for (i = 0; i < MAXLENGTH; i++) arr[i] = rand() % 100;
    for (i = 0; i < MAXLENGTH; i++) printf("%i, ",arr[i]);
    printf("\n");
    bubble_sort(arr, MAXLENGTH);
    for (i = 0; i < MAXLENGTH; i++) printf("%i, ",arr[i]);
    return 0;
}

void bubble_sort(long *arr, int n)
{
    int i, j, k;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (arr[j] > arr[j+1])
            {
                k = arr[j], arr[j] = arr[j+1], arr[j+1] = k;
            }
        }
    }
}