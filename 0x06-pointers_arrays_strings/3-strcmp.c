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
	int len1 = strlen(s1);
	int len2 = strlen(s2);

	if (len1 < len2)
		return (-15);
	else if (len1 > len2)
		return (15);
	else
		return (0);

}
