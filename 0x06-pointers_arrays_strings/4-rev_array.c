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
	int i;

	i = n - 1;
	while (i >= 0)
{
	if (i != 0)
	printf("%d, ", a[i]);
	else
	{
		printf("%d", a[i]);
	}
	i--;
}
printf("\n");
}
