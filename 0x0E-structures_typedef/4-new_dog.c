#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - returns a pointer to new_dog
 * @name: char
 * @age:float
 * @owner:char
 *
 * Return: pointer or failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
	name = malloc(sizeof(char) * strlen(name) + 1);
	if (name == NULL)
		return (NULL);
	owner = malloc(sizeof(char) * strlen(owner) + 1);
	if (owner == NULL)
		return (NULL);
}


