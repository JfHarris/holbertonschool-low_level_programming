#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
int i;

for (i = 1; i < 101; i++)
{
if (i % 3 != 0  && i % 5 != 0)
{
printf("FizzBuzz");
}
if (i % 3 != 0)
{
printf("Fizz");
}
if (i % 5 != 0)
{
printf("Buzz");
}
else
{
putchar('i');
}
}
return (0);
}
