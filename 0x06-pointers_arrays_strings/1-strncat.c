#include "main.h"

int _strlen(char *s);

/**
 * _strncat - a function that concatenates two strings
 * @dest: string
 * @src: string
 * @n: number of bytes
 *
 * Return: dest
 */


char *_strncat(char *dest, char *src, int n)
{
	int dest_len = _strlen(dest);
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}

/**
 * _strlen - counts the length of a string
 * @s : string
 *
 * Return: i the legth of a string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
