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
			printf("Name:(nill)\nAge:%.1f\nOwner: %s\n", d->age, d->owner);

		else if (d->age == 0 && d->owner == NULL)
			printf("Name: %s\nAge:(nill)\nOwner:(nill)\n", d->name);

		else if (d->name == NULL && d->age == 0)
			printf("Name:(nill)\nAge:(nill)\nOwner:%s\n", d->owner);

		else if (d->owner == NULL)
			printf("Name:%s\nAge:%1.f\nOwner:(nill)\n", d->name, d->age);

		else if (d->age == 0)
			printf("Name:%s\nAge:(nill)\nOwner:%s\n", d->name, d->owner);

		else if (d->name == NULL && d->owner == NULL)
			printf("Name:(nill)\nAge:%1.f\nOwner:(nill)\n", d->age);
		else
			printf("Name: %s\nAge: %.1f\nOwner: %s\n", d->name, d->age, d->owner);
	}

}
