#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - multiply two arguments
 *@argc: numbers to multiply
 *@argv: array
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int x;
	int y;

	if (argc >= 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		printf("%d\n", (x * y));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
