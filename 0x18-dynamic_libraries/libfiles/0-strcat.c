#include "main.h"

int _strlen(char *s);
/**
 * _strcat - concatanates two strings
 * @dest : string
 * @src : string
 *
 * Return: concatenated string dest
 */



char *_strcat(char *dest, char *src)
{
	int dest_len = _strlen(dest);
	int i;

	for (i = 0 ; src[i] != '\0' ; i++)
	dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}

/**
 * *_strlen -counts the lenght of a string
 * @s: string
 *
 * Return: i the length of a string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0;  s[i] != '\0'; i++)
		;
	return (i);
}
