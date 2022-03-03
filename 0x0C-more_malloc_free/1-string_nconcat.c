#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: char
 * @s2: char
 * @n: unsigned int for number of char in s2
 *
 * Return: pointer that points to newly allocated space
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *str;
	
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n >= strlen(s2))
		n = strlen(s2);
	str = malloc(strlen(s1) + n + 1);
	if (str == NULL)
		return (NULL);


	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; j < n; j++)
	{
		s1[i + strlen(s1) + 1] = s2[j];
		i++;
	}
	str[i] = '\0';

	return (str);


}
