#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - display dog information
 * @d: dog
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(0);

	if (d->name)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)");

	printf("Age: %f\n", d->age);

	if (d->owner)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)");
}
