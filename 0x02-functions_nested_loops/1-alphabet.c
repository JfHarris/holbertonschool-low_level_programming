#include <stdio.h>
/**
 * print_alphabet - for loop
 *
 * Return: void
 */
void print_alphabet(void)
{
char ch;

for
(ch = 'a';
ch <= 'z';
ch++)
putchar(ch);
putchar('\n');
}
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
print_alphabet();
return (0);
}
