#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - create a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	int n, i, ln, lo;

	new = malloc(sizeof(*new));
	if (new == NULL || !(name) || !(owner))
	{
		free(new);
		return (NULL);
	}

	ln = sizeof(*name);
	lo = sizeof(*owner);

	new->name = malloc(ln);
	new->owner = malloc(lo);

	if (new->name == NULL || new->owner == NULL)
	{
		free(new->name);
		free(new->owner);
		free(new);
		return (NULL);
	}

	for (i = 0; i <= ln; i++)
		new->name[i] = name[i];
	new->name[ln] = '\0';

	for (n = 0; n <= lo; n++)
		new->owner[n] = owner[n];
	new->owner[lo] = '\0';

	new->age = age;

	return (new);
}
