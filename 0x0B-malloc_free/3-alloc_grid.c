#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 d array of ints
 * @width: int
 * @height: int
 *
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int i;
	int **a;

	a = malloc(sizeof(int *) * width);
		if (a == NULL)
		return (NULL);
	if (width <= 0 || height <= 0)
		return (NULL);
		else
		{
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * height);
	}
		}
	return (a);

}
