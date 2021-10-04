#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_triangle(int size)
{
  int x;
  int y;
  
  if (size > 0)
    {
      for (x = 0 ; x < size ; x++)
	{
	  for (y = 0 ; y < size ; y++)
	    {
	      _putchar('#');
	    }
	  _putchar('\n');
	}
    }
  else
	{
	  _putchar('\n');
	}
return;
}
