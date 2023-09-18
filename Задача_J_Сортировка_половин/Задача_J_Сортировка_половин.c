#include <stdlib.h>
#include <stdio.h>

int partition(int arr[], int start, int end, int dir)
{
    int pivot = arr[start];
    int count = 0;
    int tmp;
    for (int i = start + 1; i <= end; i++)
        if ((arr[i] <= pivot && dir == 0) || (arr[i] > pivot && dir == 1)) 
            count++;

    int pivotIndex = start + count;
    tmp = arr[pivotIndex];
    arr[pivotIndex] = arr[start];
    arr[start] = tmp;

    int i = start, j = end;
 
    while (i < pivotIndex && j > pivotIndex)
    {
        while ((arr[i] <= pivot && dir == 0) || (arr[i] > pivot && dir == 1)) 
            i++;
        while ((arr[j] > pivot && dir == 0) || (arr[j] <= pivot && dir == 1)) 
            j--;
 
        if (i < pivotIndex && j > pivotIndex) {
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            i++;
            j--;
        }
    }
 
    return pivotIndex;
}
 
void quickSort(int* arr, int start, int end, int dir)
{
    if (start >= end)
        return;
    int p = partition(arr, start, end, dir);
    quickSort(arr, start, p - 1, dir);
    quickSort(arr, p + 1, end, dir);
}

int main(int argc, char* argv[])
{
    int size;
    int* array;
    int count = -1;
    scanf_s("%d", &size);
    array = (int*)malloc(sizeof(int) * size);

    for (int i = 0; i < size; ++i)
        scanf_s("%d", &array[i]);

    quickSort(array, 0, size / 2, 0);
    quickSort(array, size / 2, size - 1, 1);
    for (int i = 0; i < size; i++)
       printf("%d ", array[i]);
    free(array);
    return 0;
}
