#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
#include <stdio.h>

/**
 *struct dog - details about dog
 *@name: dog's name
 *@age: dog's age
 *@owner: dog's owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - change dog to dog to dog_t
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
