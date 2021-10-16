#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - print all arguments
 *@argc: number of args
 *@argv: string containing args
 *
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0 ; x < argc ; x++)
	{
		printf("%s\n", argv[x]);
	}
return (0);
}
