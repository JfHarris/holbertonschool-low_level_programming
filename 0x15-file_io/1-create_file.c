#include "main.h"

/**
 * create_file - creates file
 *@filename: name of file to create
 *@text_content: string to write the file
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int op;
	int wrt;
	int length;

	length = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (length = 0 ; text_content[length] ; )
		{
			length++;
		}
	}

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wrt = write(op, text_content, length);

	if (op == -1 || wrt == -1)
	{
		return (-1);
	}

	close(op);

	return (1);
}
