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
		string[i] -= 32;

			if (string[i] == '\0')
				break;
	}
	return (string);
}
