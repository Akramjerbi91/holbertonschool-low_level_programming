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

	if (d->age == 0 && d->owner == 0)
		printf("Name: %s\nAge: (nil)\nOwner: (nil)\n", d->name);
	else if (d->name == 0 && d->age == 0)
		printf("Name: (nil)\nAge: (nil)\nOwner: %s\n", d->owner);
	else if (d->name == 0 && d->owner == 0)
		printf("Name: (nil)\nAge: %1.6f\nOwner: (nil)\n", d->age);
	else if (d->age == 0)
		printf("Name: %s\nAge: (nil)\nOwner: %s\n", d->name, d->owner);
	else if (d->owner == 0)
		printf("Name: %s\nAge: %1.6f\nOwner: (nil)\n", d->name, d->age);
	else if (d->name == 0)
		printf("Name: (nil)\nAge: %1.6f\nOwner: %s\n", d->age, d->owner);
	else

	printf("Name: %s\nAge: %1.6f\nOwner: %s\n", d->name, d->age, d->owner);
}

}
