#include <stdio.h>
#include "main.h"

/**
 *set_bit - sets a bit at given index
 * @n: pointer to n
 * @index: index
 *
 * Return: set bit
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1 << index;
	int result;

	result = *n |= mask;

	if (index > 64)
		return (-1);
	if (result)
		return (1);
	else
		return (-1);

}
