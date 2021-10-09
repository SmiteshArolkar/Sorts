#include "SelectionSort.h"
#include "BubbleSort.h"
class Sort
{
public:
    Sort() {
    }
    void selectionSort(int* arr, int& size);
    void bubbleSort(int* arr, int& size);
private:
    SelectionSort Ssort;
    BubbleSort Bsort;

};