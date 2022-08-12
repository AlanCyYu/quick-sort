# quick-sort

Another way for partition implementation: "Lomuto partition scheme."
```
static int16_t Partition(int16_t* arr, int16_t arrSize)
{
    int16_t pivot = arr[arrSize-1];
    int16_t i = 0, j = 0;

    for (j = 0; j <= arrSize-1; j++)
    {
        if (arr[j] <= pivot)
        {
            Swap(&arr[i], &arr[j]);
            i++;
        }
    }

    return (i-1);
}
```
