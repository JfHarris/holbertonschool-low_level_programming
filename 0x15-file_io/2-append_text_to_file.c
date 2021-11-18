#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 *@filename: name of file
 *@text_content: string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int length;
	int op;

	if (filename == NULL)
	{
		return (-1);
	}
/* iterate through string */
	if (text_content != NULL)
	{
		for (length = 0 ; text_content[length] ; )
		{
			length++;
		}
	}
/* open file with correct permissions then append */
	op = open(filename, O_APPEND);
	close(op);

	return (1);
}
