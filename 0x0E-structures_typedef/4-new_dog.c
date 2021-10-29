#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strlen- length of strong
 *@s: pointer
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
/**
 *_strcpy- copy string from src to dest
 *@dest: char
 *@src: char
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0 ; src[x] != 0 ; x++)
	{
		dest[x] = src[x];
	}
	dest[x++] = '\0';
	return (dest);
}
/**
 * new_dog - infor about new dog struct
 *@name: char
 *@age: float
 *@owner: char
 *
 * Return: dog. NULL on failure.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int x;
	int y;

	x = _strlen(name);
	y = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}

	dog->name = malloc(sizeof(char) * (x + 1));

	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (y + 1));

	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
