#include "main.h"

/**
 * print_triangle - a function that draws a triangle on the terminal.
 *@size : n is the number of rows
 *
 * Return: a triangle.
 */


void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar(10);
	else

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				k = size - i - 1;
				if (k > j)
					_putchar(' ');
				else
					_putchar(35);

			}

			_putchar(10);

		}

}

