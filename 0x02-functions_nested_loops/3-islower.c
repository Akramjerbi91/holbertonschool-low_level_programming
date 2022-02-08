#include "main.h"

/**
 * _islower - checks for lowercase character.
 *@c: c is one character
 *
 * Return: 1 if c is lowercase.else returns 0
 */
int _islower(int c)

{
	if (c < 97 || c > 122)
	return (0);
	else
	return (1);

}
