#include <stdio.h>
/**
 * print_alphabet_x10 - Printing alphabet 10 times
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
char ch;

for (ch = 'a'; ch <= 'z'; ch++)
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
int i;

for (i = '0' ; i <= '9' ; i++)
print_alphabet_x10();
return (0);
}
