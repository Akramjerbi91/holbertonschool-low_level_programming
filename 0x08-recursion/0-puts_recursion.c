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

	if (*s != '\0')
	_puts_recursion(s);
	if (*s == '\0')	
	_putchar(10);
}
