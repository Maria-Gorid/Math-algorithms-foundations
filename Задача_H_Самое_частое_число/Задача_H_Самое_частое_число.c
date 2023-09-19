#include <stdlib.h>
#include <stdio.h>

int partition(int* arr, int start, int end)
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
    int size, count = 0, max = -1, num;
    int* array;
    scanf_s("%d", &size);
    array = (int*)malloc(sizeof(int) * size);
    
    for (int i = 0; i < size; ++i)
        scanf_s("%d", &array[i]);

    for (int i = 0; i < size - 1; ++i)
    {
        if (array[i] == array[i + 1])
            count++;
        if (array[i] != array[i + 1] || i == size - 1)
        {
            count = 0;
            if (count > max)
            {
                max = count;
                num = array[i];
            }
        }
    }
    printf("%d", num);
    free(array);
    return 0;
}
