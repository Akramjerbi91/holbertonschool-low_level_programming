#include <stdio.h>
#include <stdlib.h>
/**
 *create_array - create array of chars and initialize it to specific char
 *@size: size of array
 *@c: char
 *
 *Return: c
 */

char *create_array(unsigned int size, char c)
{

	char *b = malloc(sizeof(char) * size);
	unsigned int i;

	if (size == 0)
		return (NULL);
	if (b == 0)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		b[i] = c;
	}
		return (b);
}
