#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 0 ; i <= 9 ; i++)
{
putchar(i % 10 + '0');
}
for (i = 0 ; i <= 9 ; i++)
{
putchar(',');
}
for (i = 0 ; i <= 9 ; i++)
{
putchar(' ');
}
return (0);
}
