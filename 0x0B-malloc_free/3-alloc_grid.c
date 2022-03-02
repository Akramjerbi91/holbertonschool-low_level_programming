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

	if (width <= 0 || height <= 0)
		return (NULL);
	
	a = malloc(sizeof(int *) * width);
		if (a == NULL)
		return (NULL);
	
		else
		{
	for (i = 0; i < height; i++)
	{
		a[i] = calloc(sizeof(int) ,height);
		if (a[i] == NULL)
		{
		for(i = 0; i < height; i++)
		{	
		free(a[i]);
		}
		free(a);
		return (NULL);
		}
	}
	
}
	return (a);

	}
