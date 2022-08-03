#include <stdio.h>

/**
 *print_to_98- print all natural numbers to 98
 *@n: var
 * Return: Always 0.
 */

void print_to_98(int n)
{
int x;

if (n > 98)
{
for (x = n; x >= 98; x--)
{
printf("%d", x);
if (x != 98)
{
printf(", ");
}
}
}
else if (n == 98)
{
printf("98");
}
else
{
for (x = n; x <= 98; x++)
{
printf("%d", x);
if (x != 98)
{
printf(", ");
}
}
}
printf("\n");
}
