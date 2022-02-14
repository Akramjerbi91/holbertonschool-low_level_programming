#include "main.h"


int _strlen(char *s);

/**
 * print_rev - prints the reversed string
 * @s : string
 *
 * Return: void
 */



void print_rev(char *s)
{
	int g, leng;

	leng = _strlen(s);

	for (g = leng - 1; g >= 0; g--)
{
	_putchar(s[g]);
}
	_putchar(10);
}


/**
 * _strlen - counts the lenght of the string
 * @s : string
 *
 * Return: i
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
{
	i = i;
}
	return (i);
}
