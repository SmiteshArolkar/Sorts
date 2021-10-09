#include "App.h"

App::App() {
	arr = new int;
	size = 0;

	
}

App::~App()
{
	TerminateApp();
}

void App::run()
{
	std::cout << "\t\tWELOME TO THIS NOT SO AMAZING PROGRAM :D\n";
	int choice;
	do
	{
		std::cout << "1:Selection Sort\n2:Bubble Sort\n3:Print Array\n0:exit\n";
		std::cin >> choice;

		switch (choice)
		{
		case 1:GetArraySize();
			Array.fillArray(arr, size);
			sort.selectionSort(arr, size);
			break;
		case 2:GetArraySize();
			Array.fillArray(arr, size);
			sort.bubbleSort(arr, size);
			break;
		case 3:Array.PrintArray(arr, size);
			break;
		default:std::cout << "| INVALID INPUT |\n";
			break;
		}

	} while (choice);

}

void App::TerminateApp()
{
	free(arr);
}

void App::GetArraySize()
{
	std::cout << "Array Size\n";
	std::cin >> size;
}
