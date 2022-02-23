#include "main.h"

/**
 *_puts_recursion - function that prints a string
 * @s: char
 *
 * Return: void;
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;

	if (*s == '\0')
	_putchar('\n');
	else
	_puts_recursion(s);
}
