#include "main.h"
#include "holberton.h"
/**
 *_strcat - concatenate two strings
 *@dest: pointer
 *@src: pointer 2
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
  int x;
  int y;
  char str3[y];

  x = 0;
  y = 0;

  while (dest[x] != '\0')
    {
      str3[y] = src[x];
      x++;
      y++;
    }

  x = 0;

  while (src[x] != '\0')
    {
      str3[y] = src[x];
      x++;
      y++;
    }

  str3[y] = '\0';
  
  return (0);
}
