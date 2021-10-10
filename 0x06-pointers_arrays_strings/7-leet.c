#include "main.h"
#include "holberton.h"

/**
 * leet - switching certain chars for ints
 * 
 * Return: Always 0.
 */

char *leet(char *s)
{

int x;
int y;
char i[] = {'7' , '7' , '4' , '4' , '3' , '3' , '1' , '1', '0' , '0'};
char a[] = {'T' , 't' , 'A' , 'a' , 'E' , 'e' , 'L' , 'l' , 'O' , 'o'};

for (x = 0 ; s[x] != 0 ; x++)
{
  for (y = 0 ; y <= 9 ; y++)
  {
    if (s[x] == a[y])
    {
      s[x] = i[y];
    }
  }
}
return (s);
}
