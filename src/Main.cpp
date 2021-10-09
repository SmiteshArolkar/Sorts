#include "ArrayHandle.h"
#include "Sort.h"
int main()
{
	int* arr = new int;
	int size;
	std::cout << "Enter size\n";
	std::cin >> size;
	ArrayHr Array;
	Array.fillArray(arr, size);
	Sort sort;
	sort.selectionSort(arr, size);
	Array.PrintArray(arr, size);
	std::cin.get();
	return 0;
}