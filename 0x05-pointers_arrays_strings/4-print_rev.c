#include "main.h"
/**
 *print_rev- print string in reverse then new line
 *@s: pointer
 * Return: Always 0.
 */
void print_rev(char *s)
{
  while (*s != 0)
    {
      s++;
    }
  s--;
  while (*s != 0)
    {
      _putchar(*s);
      s--;
    }
  _putchar('\n');

return;
}
