#include "Sort.h"
#include "ArrayHandle.h"
class App
{
public:
	App();
	~App();
	void run(); 
	void TerminateApp();
private:
	
	void GetArraySize();
	ArrayHr Array;
	Sort sort;
	int* arr;
	int size;
};