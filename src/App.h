#include "Sort.h"
#include "ArrayHandle.h"
class App
{
public:
	App();
	~App();
	void run();
private:
	void TerminateApp();
	void GetArraySize();
	ArrayHr Array;
	Sort sort;
	int* arr;
	int size;
};