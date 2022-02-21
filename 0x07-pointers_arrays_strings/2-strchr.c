#include "main.h"
#include <string.h>

/**
 *_strchr -  function that locates a character in a string.
 *@s: char
 *@c: char
 *
 * Return: f first accurrence
 */


char *_strchr(char *s, char c)

{

	while (*s++)
	{
		if (*s == c)
			return (s);
	}
	return (0);

}
