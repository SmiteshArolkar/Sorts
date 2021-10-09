#include "SelectionSort.h"

SelectionSort::SelectionSort()
{
}

SelectionSort::SelectionSort(int* arr, int& size)
{
    for (int i = 0; i < size; i++)
    {
        int pos = i;
        int small = arr[i];
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < small)
            {
                small = arr[j];
                pos = j;
            }
        }
        int x = arr[pos];
        arr[pos] = arr[i];
        arr[i] = x;

    }
}

void SelectionSort::runSort(int* arr, int& size) {
	SelectionSort(arr, size);
}
