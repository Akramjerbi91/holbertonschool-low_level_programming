#include "main.h"

/**
 * print_square - a function that draws a diagonal line on the terminal.
 *@size : n is the number of times the character \ should be printed
 *
 * Return: a diagonal line.
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar(10);
	else
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar(35);


			}
			_putchar(10);
		}
}
