#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: void
 */

void jack_bauer(void)
	{
	int m, h;

	while (h != 24)
	{
	_putchar((h / 10) + 48);
	_putchar((h % 10) + 48);
	_putchar(':');
	_putchar((m / 10) + 48);
	_putchar((m % 10) + 48);
	_putchar('\n');
	 m++;
	if (m == 60)
	{
	h += 1;
	m = 0;
	}

	}
}
