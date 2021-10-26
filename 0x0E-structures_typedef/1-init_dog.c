#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - initiate variable of struct dog
 *@d: pointer
 *@name: char
 *@age: float
 *@owner: char
 *
 * Return: void.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
	else
	{
		return;
	}
}
