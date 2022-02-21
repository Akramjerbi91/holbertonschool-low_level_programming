#include "main.h"
#include <stddef.h>

unsigned int _strcspn(char *s, char *accept);

/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: char
 * @accept: char
 *
 * Return: s
 */



char *_strpbrk(char *s, char *accept)
{
	s += _strcspn(s, accept);

	if ((char *)s)
    {	
        return (s);
    }
		return (NULL);
}


/**
 *_strcspn - n of char at beginning 1st str that do not occur in the second str
 *@s: char
 *@accept: char
 *
 *Return: len
 */
unsigned int _strcspn(char *s, char *accept)
{
	unsigned int len = 0, i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (s[i] == accept[j])
			break;
		len++;
	}

	return (len);
}
