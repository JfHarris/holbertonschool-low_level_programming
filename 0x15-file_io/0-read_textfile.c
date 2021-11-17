#include "main.h"

/**
 * read_textfile - read & print text file
 *@filename: pointer to file's name
 *@letters: number of letters to read & print
 *
 * Return: 0 if NULL or on fail to open, read, or write. Number of letters read
 * and printed on success
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *size;
	ssize_t op;
	ssize_t rd;
	ssize_t wrt;

	size = malloc(sizeof(char) * letters);
	op = open(filename, O_RDONLY);

	if (filename == NULL)
	{
		return (0);
	}

	if (op == -1)
	{
		return (0);
	}

	if (size == NULL)
	{
		return (0);
	}

	rd = read(op, size, letters);
	wrt = write(STDOUT_FILENO, size, rd);

	close(op);
	free(size);
	return (wrt);
}
