#include "main.h"

/**
 * print_last_digit -  function that prints the last digit of a number.
 *@n: n is an integer
 *
 * Return: the last digit of a given number
 */

int print_last_digit(int n)
{
	int ld;
	if (n < 0)
	ld = (n % 10) * -1;
	else
	ld = n % 10;

	return (ld);

}
