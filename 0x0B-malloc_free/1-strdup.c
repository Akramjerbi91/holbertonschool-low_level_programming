#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 *
 * Return: pointer to new mem
 */

char *_strdup(char *str)
{
	char *p;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	p = malloc(sizeof(char) * strlen(str));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < strlen(str); i++)
		p[i] = str[i];
	return (p);
}
