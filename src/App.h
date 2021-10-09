#include "Sort.h"
#include "ArrayHandle.h"
class App
{
public:
	App();
	void run();
private:
	void GetArraySize();
	ArrayHr Array;
	Sort sort;
	int* arr;
	int size;
};