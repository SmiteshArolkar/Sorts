#include "ArrayHandle.h"
void ArrayHr::fillArray(int* arr, int& size)
{
	for (int i = 0; i < size; i++)
		std::cin >> arr[i];

}


void ArrayHr::PrintArray(int* arr, int& size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << "\t";
	}
	std::cout << std::endl;
}
