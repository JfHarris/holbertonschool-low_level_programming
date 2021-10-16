#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - adding numbers
 *@argc: numbers to add
 *@argv: array
 *
 *Return: if not digit (1) if no digit (0) else (sum)
 */

int main(int argc, char *argv[])
{
	int x;
	int y;
	int sum;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (x = 1 ; x < argc ; x++)
	{
		y = atoi(argv[x]);

		if (y == '\0')
		{
			printf("Error\n");
			return (1);
		}

		sum = sum + y;
	}

	printf("%d\n", sum);
	return (0);
}
