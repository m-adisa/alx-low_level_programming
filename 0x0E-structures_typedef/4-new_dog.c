#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * dog_t - create a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	int n, o, i;

	new = malloc(sizeof(*new));
	if (new == NULL || !(name) || !(owner))
	{
		free(new);
		return (NULL);
	}

	new->age = age;

	new->name = malloc(sizeof(name));
	new->owner = malloc(sizeof(owner));

	if (new->name == NULL || new->owner == NULL)
	{
		free(new->name);
		free(new->owner);
		return (NULL);
	}

	for (i = 0; i <= (int) sizeof(name); i++)
		new->name[i] = name[i];

	for (n = 0; n <= (int) sizeof(owner); n++)
		new->owner[n] = owner[n];

	return (new);
}
