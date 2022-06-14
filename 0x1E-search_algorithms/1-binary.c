#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size:  number of elements in array
 * @value:  value to search for
 * Return: If value is not present in array or array is NULL return -1
 */

int binary_search(int *array, size_t size, int value)
{
    size_t x;
    size_t max;
    size_t min;
    size_t mid;

    min = 0;
    max = size - 1;
    mid = 0;

    if (array == NULL)
    {
        return (-1);
    }

    while (min <= max)
    {
        mid = (max + min) / 2;
        x = min;

        printf("Searching in array: ");

        for ( ; x <= max; x++)
        {
            if (x != min)
            {
                printf(", %d", array[x]);
            }
            else
            {
                printf("%d", array[x]);
            }
        }

        printf("\n");

        if (array[mid] < value)
        {
            min = mid + 1;
        }
        else if (array[mid] > value)
        {
            max = mid - 1;
        }
        else
        {
            return (mid);
        }
    }

    return (-1);

}
