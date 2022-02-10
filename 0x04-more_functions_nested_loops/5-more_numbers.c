#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers,
 *from 0 to 14, followed by a new line.
 *
 * Return : returns void
 */

void more_numbers(void)
{
	int i, j = 0;

while (j <= 10)
{
	for (i = 0; i <= 14; i++)
	{
		if (i > 9)
		{
		_putchar((i / 10) + 48);
		_putchar((i % 10) + 48);
		}
		else
		_putchar(i + 48);
}
	_putchar(10);
	j++;
}
}
