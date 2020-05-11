#include <stdio.h>

void bubble_sort(int *arr, int *arrSize);

int main(int argc, char const *argv[])
{
    int arrSize;
    scanf("%d",&arrSize);
    int arr[arrSize];
    
    int i;
    for (i = 0; i < arrSize; i++) scanf("%d",&arr[i]);
    bubble_sort(arr, &arrSize);
    for (i = 0; i < arrSize; i++) printf("%d ",arr[i]);
    return 0;
}

void bubble_sort(int *arr, int *arrSize)
{
    int temp;
    for (int i = 0; i < *arrSize - 1; i++)
    {
        for (int j = 0; j < *arrSize - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}