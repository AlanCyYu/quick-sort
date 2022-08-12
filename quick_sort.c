#include "quick_sort.h"
#include <stdint.h>
#include <stdio.h>

static int16_t Partition(int16_t * arr, int16_t arrSize);
static void Swap(int16_t* a, int16_t* b);

void QuickSort(int16_t * arr, int16_t arrSize)
{
    if (arrSize <= 1)
    {
        return;
    }
    
    int16_t mid = Partition(arr, arrSize);

    QuickSort(arr, mid);
    QuickSort(arr+(mid+1), arrSize-mid-1);
}

static int16_t Partition(int16_t* arr, int16_t arrSize)
{
    int16_t pivot = arr[arrSize-1];
    int16_t i = 0, j = 0;

    while ((j <= arrSize-1))
    {
        while ((arr[j] > pivot))
        {
            j++;
        }

        if (i < j)
        {
            Swap(&arr[i], &arr[j]);
        }
        
        j++;
        i++;
    }

    return (i-1);
}

static void Swap(int16_t* a, int16_t* b)
{
    int16_t temp = *a;
    *a = *b;
    *b = temp;
}