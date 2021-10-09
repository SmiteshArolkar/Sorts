#include "BubbleSort.h"

BubbleSort::BubbleSort()
{
}

BubbleSort::BubbleSort(int* arr, int& size)
{
	for (int i = 0; i < size - 1; i++)
		for (int j = 0; j < size - i - 1; j++)
			if (arr[j] > arr[j + 1])
			{
				int t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
}

BubbleSort::BubbleSort(float* arr, int& size)
{
	for (int i = 0; i < size - 1; i++)
		for (int j = 0; j < size - i - 1; j++)
			if (arr[j] > arr[j + 1])
			{
				float t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
}

BubbleSort::BubbleSort(double* arr, int& size)
{
	for (int i = 0; i < size - 1; i++)
		for (int j = 0; j < size - i - 1; j++)
			if (arr[j] > arr[j + 1])
			{
				double t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
}

void BubbleSort::runSort(int* arr, int& size)
{
	BubbleSort(arr, size);

}
