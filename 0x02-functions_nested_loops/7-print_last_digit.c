#include "main.h"

/**
 * print_last_digit -  function that prints the last digit of a number.
 *@n: n is an integer
 *
 * Return: the last digit of a given number
 */

int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
{	
	n = _abs(n);
    return (n);
}
}
