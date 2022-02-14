#include "main.h"
#include <stdio.h>
int _strlen(char *s);

/**
 * puts_half - prints the second half of string
 * @str : string
 *
 * Return: string
 */

void puts_half(char *str)
{

	int i, length;

	i = 0;
	length = _strlen(str);
	/*printf("%d", length);*/
	if (length % 2 == 0)

	for (i = length / 2; i < length; i++)

	_putchar(str[i]);

	else if (length % 2 != 0)

	for (i = length / 2; i <= (length - 1) /2; i++)

	_putchar(str[i]);

	else if (length == 0)
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
