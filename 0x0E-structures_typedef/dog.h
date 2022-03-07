#ifndef DOG
#define DOG

/**
 * struct dog - dog attributes
 * @name: char
 * @age: float
 * @owner: char
 *
 * Description: dog's name age and owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
