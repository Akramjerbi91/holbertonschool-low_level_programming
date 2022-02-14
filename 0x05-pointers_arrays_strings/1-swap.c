#include "main.h"

/**
 * swap_int - a func that swaps two integers
 * @a, @b : two integers
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
