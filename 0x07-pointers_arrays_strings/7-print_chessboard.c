#include "main.h"

/**
 *print_chessboard - check the code
 *@a: array
 * Return: Always 0.
 */

void print_chessboard(char (*a)[8])
{
int hor;
int vert;

hor = 0;
vert = 0;

for (hor = 0 ; hor < 8 ; hor++)
{
for (vert = 0 ; vert < 8 ; vert++)
{
_putchar(a[hor][vert]);
}
_putchar('\n');
}
return;
}
