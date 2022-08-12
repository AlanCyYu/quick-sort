# quick-sort

Another way for partition implementation, i and j move from both sides, toward the middle of array.

static int16_t Partition(int16_t* arr, int16_t arrSize)
{
    int16_t pivot = arr[arrSize-1];
    int16_t i = 0, j = arrSize-1;

    while (i < j)
    {
        while ((i < j) && (arr[i] <= pivot))
        {
            i++;
        }
        
        while ((i < j) && (arr[j] >= pivot))
        {
            j--;
        }

        if (i < j)
        {
            Swap(&arr[i], &arr[j]);
        }
    }

    Swap(&arr[i], &arr[arrSize-1]);
    return i;
}
