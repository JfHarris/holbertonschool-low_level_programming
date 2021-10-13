#include "main.h"
#include <stdio.h>
/**
 *print_diagsums - print sums of nums diagonal to each other
 *@a: pointer
 *@size: size of arrays
 * Return: Always 0.
 */

void print_diagsums(int *a, int size)
{
	int x;
	int sum;
	int sumb;
	int *b;

	b = a;
	sum = 0;
	sumb = 0;

	for (x = 0 ; x < size ; x++)
	{
		sum = sum + a[x];
		a = a + size;
	}
	printf("%d, ", sum);

	for (x = size - 1; x >= 0 ; x--)
	{
		sumb = sumb + b[x];
		b = b + size;
	}
	printf("%d", sumb);
	printf("\n");
}
