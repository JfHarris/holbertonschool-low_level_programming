#include "main.h"
#include <stddef.h>

/**
 *_strstr - finds matching bytes of substring in string
 *@haystack: string to check
 *@needle: substring to find
 * Return: Always 0.
 */

char *_strstr(char *haystack, char *needle)
{
int i;

if (!*needle)
{
	return (haystack);
}
while (*haystack)
{
	for (i = 0 ; haystack[i] == needle[i] ; ++i)
	{
		if (!needle[i + 1])
			return (haystack);
	}
	++haystack;
}
return (NULL);
}
