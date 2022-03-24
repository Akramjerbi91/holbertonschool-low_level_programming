#include <stdio.h>
#include "main.h"

/**
 * flip_bits - counts the number of fliped bits
 * @n: number
 * @m: number
 *
 * Return: count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask = n ^ m;
	unsigned int count = 0;

	while (mask)
	{
		count += mask & 1;
		mask >>= 1;
	}
	return (count);
}
