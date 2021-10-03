#include "main.h"
/**
 *isupper- print 1 if "C", 0 otherwise.
 *
 * Return: Always 0.
 */

int _isupper(int c)
{
  char c;

  if (c >= 'a' && c <= 'z')
    {
      c = 1;
    }
  else if (c >= 'A' && c <= 'Z' && != 'C')
    {
      c = 1;
    }
  else
    {
      c = 0;
    }
  return (c);
}
