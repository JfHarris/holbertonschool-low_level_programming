#include "main.h"
/**
 *print_diagonal- printing
 *@n: var
 * Return: Always 0.
 */

void print_diagonal(int n)
{
int x;
int y;

 if (n > 0)
   {
     for (x = 0 ; x < n ; x++)
       {
	 for (y = 0 ; y < x ; y++)
	   {
	     _putchar(' ');
	   }
     _putchar(92);
       }
   }
_putchar('\n');
return;
}
