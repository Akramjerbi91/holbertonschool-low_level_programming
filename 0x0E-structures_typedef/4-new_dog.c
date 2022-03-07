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
	char *namecpy, *ownercpy;

	dog = (dog_t *)malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	namecpy = (char *)malloc(sizeof(char) * strlen(name) + 1);
	if (name == NULL)
		return (NULL);
	ownercpy = (char *)malloc(sizeof(char) * strlen(owner) + 1);
	if (owner == NULL)
		return (NULL);

	dog->name = name;
	strcpy(namecpy, name);
	dog->age = age;
	dog->owner = owner;
	strcpy(ownercpy, owner);

	return (dog);
}


