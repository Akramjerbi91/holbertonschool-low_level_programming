#include "main.h"

/**
 *print_sign - a function that prints the sign of a number.
 *@n: c is an integer
 *
 * Return: 1 if n is positive, -1 if n is negative and 0 if n is 0
 */


int print_sign(int n)
{
if (n > 0)

	_putchar('+');
	return 1;

	else if (n < 0)

	_putchar('-');
	return -1;

	else

	_putchar('0');
	return 0;

}


