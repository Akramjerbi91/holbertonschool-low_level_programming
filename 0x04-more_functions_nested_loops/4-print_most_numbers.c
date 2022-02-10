#include "main.h"

/**
 * print_most_numbers - prints the first ten digits exept 2 and 4
 *
 * Return : returns void
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		_putchar(i + 48);
}
	_putchar(10);
}
