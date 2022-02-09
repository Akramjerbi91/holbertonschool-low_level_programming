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
	while (n != 98)
{
	if (n < 98)
{
	n++;
	printf("%d, ", n);
}
	else if (n > 98)
{
	n--;
	printf("%d, ", n);
}
}
	if (n == 98)
	printf("%d\n", n);
}
