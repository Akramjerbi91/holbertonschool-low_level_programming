#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * str_concat - concat two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: rtn pointer to newly allocated space
 */
char *str_concat(char *s1, char *s2)
{
	char *rtn;
	int p, q = 0;

	if (s1 == NULL || s2 == NULL)
	return (NULL);

	rtn = malloc(strlen(s1) + strlen(s2) + 1);
	if (rtn == NULL)
		return (NULL);
	for (p = 0; (rtn[q] = s1[p]) != '\0'; ++p, ++q)
	for (p = 0; (rtn[q] = s2[p]) != '\0'; ++p, ++q)
	return (rtn);
}

