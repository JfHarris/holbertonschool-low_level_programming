#include "main.h"
/**
 *swap_int- swapping value of two ints
 *@a: pointer
 * Return: Always 0.
 *@b: pointer 2
 */

void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;

return;
}
