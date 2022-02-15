#include "main.h"
#include <stdio.h>

/**
 * print_array - prints the array
 * @a: array
 * @n: index
 *
 * Return: void
 */




void print_array(int *a, int n)
{
	int i;


		if (n <= 0)
			printf("\n");
	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			printf("%d, ", *a);
			a++;
		}
		else 
		{
			printf("%d\n", *a);
			a++;
		}
		
	}

}
