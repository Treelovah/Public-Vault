#include "swap.cpp"

void selectionSort(int *arr, int *arrSize, char *symbol) // takes array, array size, and > or < symbol and sorts.
{
    for (int i = 0; i < *arrSize; i++)
    {
        for (int j = i + 1; j < *arrSize; j++)
        {
            if (*symbol == '>')
            {
                if (arr[j] > arr[i]) swap_it(&arr[i], &arr[j]);
            }
            if (*symbol == '<')
            {
                if (arr[j] < arr[i]) swap_it(&arr[i], &arr[j]);
            }
        }
    }
}