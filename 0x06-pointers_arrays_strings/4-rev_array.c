#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse an array
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
	int i, tempy;

	i  = 0;
	while (i < n / 2)
{
	tempy = a[i];
	a[i] = a [n - 1 - i];
	a [n - 1 - i] = tempy;
	i++;
}
}
