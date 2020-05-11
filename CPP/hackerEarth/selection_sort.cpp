#include <stdio.h>


void selection_sort(int *arr, const int *arrSize, const int *iterations);

int main(int argc, char const *argv[])
{
    const int arrSize{ 10 };
    int iterations;
    scanf("%d",&iterations);
    int arr[arrSize]{ 1, 3, 5, 2, 4, 9, 6, 8, 7, 10 };
    selection_sort(arr, &arrSize, &iterations);
    for (int i = 0; i < arrSize; i++) printf("%d ",arr[i]);
    printf("\n");
    return 0;
}

void selection_sort(int *arr, const int *arrSize, const int *iterations)
{

    int i, temp, min;
    int swaps{ 0 };
    
    for (i = 0; i < *arrSize - 1; i++)
    {
        *iterations--;
        min = i;
        for (int j = i + 1; j < *arrSize; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }
        
        if (iterations > 0)
        {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}