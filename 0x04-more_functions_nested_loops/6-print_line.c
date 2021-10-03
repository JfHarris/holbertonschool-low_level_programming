#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_line(int n)
{
  int x;
  int y;
  char a = '_'
  
  for (x = 0 ; x < n; x++)
    {
     for (y = 0 ; y <= x ; x++)
       {
	_putchar(a);
	_putchar('\n');
       }
     if (x < 0)
       {
	_putchar('\n');
       }
    }
  _putchar('\n');
  return;
}
