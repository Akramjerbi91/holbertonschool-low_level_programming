#include"main.h"
#include <string.h>

/**
 * _strcmp - compares two strings
 * @s1: char
 * @s2: char
 *
 * Return: 0 if equal -1 if s1 is less than S2 else 1
 */

int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	if (*s1 == *s2)
	{
		return (0);
	}

	else
	{
		return (*s1 - *s2);
	}
}
