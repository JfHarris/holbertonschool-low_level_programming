#include "main.h"

/**
 *findsqr - find square root
 *@n: int
 *@x: value of n
 * Return: square root or -1.
 */

int findsqr(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}

	if (x * x > n)
	{
		return (-1);
	}

	return (findsqr(n, x + 1));
}

/**
 *_sqrt_recursion - square root
 *@n: int
 *
 * Return: square root or -1.
 */
int _sqrt_recursion(int n)
{
	int x;

	x = 1;

	return (findsqr(n, x));
}
