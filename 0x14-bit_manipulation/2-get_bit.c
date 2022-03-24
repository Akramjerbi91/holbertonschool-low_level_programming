#include <stdio.h>
#include "main.h"

/**
 * get_bit - gets bit at given index
 * @n: unsigned int
 * @index: index of bit
 *
 * Return: description
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int result;

	if (index > 64)
		return (-1);
	result = (n >> index) & 1;
	return (result);
}
