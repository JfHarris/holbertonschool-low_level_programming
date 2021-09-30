#include "main.h"
#include <stdio.h>
/**
 *jack_bauer - torture time
 *
 *
 * Return: Always 0.
 */

void jack_bauer(void)
{
int m;
int h;

for (h = 0 ; h <= 23 ; h++)
{
for (m = 0 ; m <= 59 ; m++)
{
if (h < 10)
{
printf("0");
}
printf("%d:", h);
if (m < 10)
{
printf("0");
}
printf("%d\n", m);
}
}
}
