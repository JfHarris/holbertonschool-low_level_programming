#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * sum_them_all - adds all
 *@n: number of parameters
 *
 * Return: 0 if n = 0, sum otherwise.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int x;
	unsigned int total;

	total = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(ap, n);

	for (x = 0 ; x < n ; x++)
	{
		total = va_arg(ap, int) + total;
	}

	va_end(ap);

	return (total);
}
