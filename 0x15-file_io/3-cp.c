#include "main.h"

void read_err(char *st);
void close_err(int file_desc);
void write_err(char *st);

/**
 * main - copy file
 *@a: args
 *@str: string
 * Return: Always 0.
 */

int main(int a, char *str[])
{
	int desc1, desc2;
	char buffer[1024];
	ssize_t size1, size2;

	if (a != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	desc1 = open(str[1], O_RDONLY);
	if (desc1 == -1)
		read_err(str[1]);
	desc2 = open(str[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (desc2 == -1)
		write_err(str[2]);
	size1 = read(desc1, buffer, 1024);
	if (size1 == -1)
		read_err(str[1]);
	size2 = write(desc2, buffer, size1);
	if (size2 == -1)
		write_err(str[2]);
	while (size1 == 1024)
	{
		size1 = read(desc1, buffer, 1024);
		if (size1 == -1)
			read_err(str[1]);
		size2 = write(desc2, buffer, size1);
		if (size2 == -1)
			write_err(str[2]);
	}
	if (close(desc1) == -1)
		close_err(desc1);
	if (close(desc2) == -1)
		close_err(desc2);
	return (0);
}

/**
 * read_err - read error
 *@st: string
 */

void read_err(char *st)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", st);
	exit(98);
}

/**
 * close_err - close error
 *@file_desc: file description
 *
 */

void close_err(int file_desc)
{
	dprintf(STDERR_FILENO, "Error: Can't close file_desc %d\n", file_desc);
	exit(100);
}

/**
 * write_err - write error
 *@st: string
 */

void write_err(char *st)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", st);
	exit(99);
}
