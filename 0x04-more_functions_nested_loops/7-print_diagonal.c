#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_diagonal(int n)
{
  int x;
  int y;
  char a = '\\'

    for (x = 0 ; x < n ; x++)
      {
       for (y = 0 ; y <= x ; y++)
	 {
	  _putchar(a);
	  _putchar('\n');
	 }
      }
  _putchar('\n');
  return;
}
