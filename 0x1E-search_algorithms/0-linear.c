#include <stdio.h>
#include <stdlib.h>

/**
 * linear_search - searches linearly for a value in an array of integers
 * @array: integer array
 * @size: as named
 * @value: cach me if u can
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!*array)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
