#include "main.h"
/**
 *puts- print string, new line, to stdout
 *@str: pointer
 * Return: Always 0.
 */
void _puts(char *str)
{
  int x;

  for (x = 0 ; x <= 66 ; x++)
    {
      str++;
      _putchar(*str);
      _putchar('\n');
    }
  return;
}
