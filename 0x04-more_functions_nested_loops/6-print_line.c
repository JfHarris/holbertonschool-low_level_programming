#include "main.h"
/**
 *print_lines - printing blank lines
 *
 * Return: Always 0.
 */

void print_line(int n)
{
  int x;

  if (n > 0)
    {
      for (x = 0 ; x < n ; x++)
	{
	_putchar(' ');
	}
    }
  _putchar('\n');
  return;
}
