#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	int x;

	x = 0;

	for (x = '0'; x <= '9'; x++)
	{
	putchar(x);
	if (x <= '8')
	{	
	putchar(',');
	putchar(' ');
	}
	}
	return (0);
}
