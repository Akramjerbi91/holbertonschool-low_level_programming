#include "main.h"
/**
 * invert -  1's and 0's
 * @n: insigned long int
 * Return: void
 */
void invert(unsigned long int n)
{
	if (n == 0)
		return;

	invert(n >> 1);

	if ((n & 1) == 1)
		_putchar('1');

	if ((n & 1) == 0)
		_putchar('0');
}
/**
 * print_binary - prints binary from decimal
 * @n: unsigned long int input
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	invert(n);
}
