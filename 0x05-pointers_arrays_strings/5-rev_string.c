#include "main.h"
/**
 *rev_string- reverse string
 *@s: char string
 * Return: Always 0.
 */
void rev_string(char *s)
{
int x;
int y;
char a;

x = 0;
y = 0;

while (s[x++])
{
y++;
}
for (x = y - 1 ; x >= (y / 2) ; x--)
{
a = s[x];
s[x] = s[y - x - 1];
s[y - x - 1] = a;

}
return;
}
