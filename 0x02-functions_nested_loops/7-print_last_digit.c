#include "main.h"

/**
 * print_last_digit -  function that prints the last digit of a number.
 *@n: n is an integer
 *
 * Return: the last digit of a given number
 */

int print_last_digit(int n)
{
	
	if (n < 0)
	n = _putchar(((n % 10) * -1)+48);
	else if (n > 0)
	n = _putchar((n % 10)+48);
	else
	n = _putchar(48);

	return(0);

}
