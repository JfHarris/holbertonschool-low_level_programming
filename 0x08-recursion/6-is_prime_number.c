#include "main.h"
/**
 *is_prime_number - check number to see if it is prime
 *@n: number being checked
 * Return: Always 0.
 */

int is_prime_number(int n)
{
int x;

if (n <= 1)
{
return (0);
}

for (x = 2 ; x < n ; x++)
{
if (n % x == 0 && x != n)
{
return (0);
}
}
return (1);
}
