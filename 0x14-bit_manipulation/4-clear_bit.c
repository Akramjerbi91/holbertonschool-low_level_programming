#include <stdio.h>
#include "main.h"

/**
 * clear_bit - clear a bit at a given index
 * @n: given int
 * @index: given index
 *
 * Return: 1 if ok -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask = ~(1 << index);

	if (index < 64)
	{	*n &= mask;
		return (1);
	}
	return (-1);
}
