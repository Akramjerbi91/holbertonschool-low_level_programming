#include "main.h"

/**
 * string_toupper - to upper
 *@string: a given string
 *
 * Return: uppercase string
 */




char *string_toupper(char *string)
{
	int i;

	for (i = 0; ; i++)
	{
		if ((string[i] >= 'a') && (string[i] <= 'z'))
		return (string[i] -= 32);
		else
			if (string[i] == '\0')
				break;
	}
