#include "main.h"
#include <stdio.h>

/**
*print_to_98 - function that prints all natural numbers from n to 98,
*@n: n is a given integer
*
* Return: void.
*/

void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
{
	if (i < 98)
{
	printf("%d, ", i);
}
	else
{
	printf("98\n");
}
}
	for (i = n; i >= 98; i--)
{
	if (i > 98)
{
	printf("%d, ", i);
}
}
}
