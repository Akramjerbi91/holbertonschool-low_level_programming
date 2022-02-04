#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 * 
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;

	x = 'A';
	for (x = 'A'; x <= 'Z'; x++)
	{
	putchar(tolower(x));
	}
	for (x = 'A'; x <= 'Z'; x++)
	{
	putchar(x);
	}
	putchar('\n');
	return (0);
}
