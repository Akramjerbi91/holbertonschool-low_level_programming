#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2d array
 * @grid: int
 * @height: int
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	unsigned int i;

	for (i = 0; i < height; i++)
		free(a[i]);
	free(a);
}
