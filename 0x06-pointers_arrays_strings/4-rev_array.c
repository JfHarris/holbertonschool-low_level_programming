#include "main.h"
#include "holberton.h"

/**
 * reverse_array - reversing array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
int x;
int y;
int z;

y = n - 1;

for (x = 0 ; x < (n / 2); x++, y--)
{
z = a[x];
a[x] = a[y];
a[y] = z;
}

return;
}
