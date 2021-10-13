#include "main.h"
/**
 *is_prime_number - check number to see if it is prime
 *@n: number being checked
 *@x: iterative number
 * Return: if prime num = 1. Otherwise, 0.
 */
int prime_num(int n, int x);
int is_prime_number(int n)
{
	int result = prime_num(n, 2);

	return (result);
}

/**
 *prime_num - find prime
 *@n: number being checked
 *@x: iterative number
 * Return: same as above.
 */

int prime_num(int n, int x)
{
	if (n == 2)
	{
		return (1);
	}
	if (n < 2)
	{
		return (0);
	}
	if (n % x == 0)
	{
		return (0);
	}
	if (x * x > n)
	{
		return (1);
	}
	return (prime_num(n, x + 1));
}
