#include <stdio.h>
#include <stdlib.h>

int partition(int arr[], int start, int end)
{
    int pivot = arr[start];
    int count = 0;
    int tmp;
    for (int i = start + 1; i <= end; i++)
        if (arr[i] <= pivot)
            count++;

    int pivotIndex = start + count;
    tmp = arr[pivotIndex];
    arr[pivotIndex] = arr[start];
    arr[start] = tmp;

    int i = start, j = end;
 
    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivot)
            i++;
        while (arr[j] > pivot)
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
 
void quickSort(int* arr, int start, int end)
{
    if (start >= end)
        return;
    int p = partition(arr, start, end);
    quickSort(arr, start, p - 1);
    quickSort(arr, p + 1, end);
}

int main(int argc, char* argv[])
{
    int size;
    int* array;
    int tmp;
    scanf_s("%d", &size);
    array = (int*)malloc(sizeof(int) * size);
    
    for (int i = 0; i < size; ++i)
        scanf_s("%d", &array[i]);
    tmp = array[0];
    
    quickSort(array, 0, size - 1);
    for (int i = 0; i < size; ++i)
    {
        if(array[i] == tmp)
        {
            printf("%d", i + 1);
            break;
        }
    }
    free(array);
    return 0;
}
