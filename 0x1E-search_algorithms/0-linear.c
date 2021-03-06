#include "search_algos.h"

/**
 * linear_search - searches for a val in array of ints
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: return the first index where value is located
 * else, If value is not present or if array is NULL return -1
 */

int linear_search(int *array, size_t size, int value)
{
    size_t x;

    x = 0;

    if (array == NULL)
    {
        return -1;
    }

    for ( ; x < size; x++)
    {
        printf("Value checked array[%ld] = [%d]\n", x, array[x]);
        if (array[x] == value)
        {
            break;
        }
    }

    if (x == size)
    {
        return (x);
    }

    return (x);

}