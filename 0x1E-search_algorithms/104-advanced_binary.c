#include "search_algos.h"

/**
 * print_format - formats and prints per example
 * @array: pointer to the first element of the array to search in
 * @left: left end of array
 * @right: right end of array
 * Return: void
 */

void print_format(int *array, size_t left, size_t right)
{
printf("Searching in array: ");
for (left = left; left < right; left++)
{
printf("%d, ", array[left]);
}
printf("%d\n", array[left]);
}

/**
 * recursive_binary - searches for a value in a sorted array of ints
 * @array: array of ints
 * @left: left end of array
 * @right: right end of array
 * @value: the value to search for
 * Return: index where value is located
 */

size_t recursive_binary(int *array, size_t left, size_t right, int value)
{
int avg;
int ref;

avg = 0;
ref = -1;

if (left > right)
{
return (-1);
}

print_format(array, left, right);
avg = (left + right) / 2;
if (array[avg] < value)
{
left = avg + 1;
ref = recursive_binary(array, left, right, value);
}
else if (array[avg] > value)
{
right = avg - 1;
ref = recursive_binary(array, left, right, value);
}
else
{
if (avg - 1 >= 0 && array[avg - 1] == array[avg])
{
ref = recursive_binary(array, left, avg, value);
}
else
{
ref = avg;
}
}

return (ref);
}

/**
 * advanced_binary - searches for a value in a sorted array of ints
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 * Return: index where value is located
 */

int advanced_binary(int *array, size_t size, int value)
{
int ref = -1;

if (array == NULL || size == 0)
{
return (-1);
}

ref = recursive_binary(array, 0, size - 1, value);

if (ref >= 0)
{
return (ref);
}

return (-1);
}
