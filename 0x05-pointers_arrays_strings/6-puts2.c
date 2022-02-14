#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character
 * @str : string
 *
 * Return: string
 */


int _strlen(char *str);

void puts2(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i += 2)
{
	_putchar(str[i]);
}

	_putchar(10);

}

/**
 * _strlen - counts the lenght of the string
 * @str : string
 *
 * Return: i
 */

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	;

	return (i);
}
