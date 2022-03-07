#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function that prints a struct dog
 * @d: struct dog
 *
 * Return: void
 */

void print_dog(struct dog *d)
{

	if (d != NULL)
	{

		if (d->name == NULL)
			d->name = "(nil)";
		if (d->owner == NULL)
			d->owner = "(nil)";
		printf("Name: %s\nAge: %1.6f\nOwner: %s\n", d->name, d->age, d->owner);
	}

}
