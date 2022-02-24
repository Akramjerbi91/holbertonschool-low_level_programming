#include "main.h"

int sqrt_guess(int n, int p);

/**
 *_sqrt_recursion - returns the natural square root of a number
 *@n: int
 *
 * Return: int
 */

int _sqrt_recursion(int n)
{

	if (n == 1)

		return (1);

	return (sqrt_guess(n, 1));
}

/**
 * sqrt_guess - finds the sqrt of a number
 * @n: int
 * @p: int
 *
 * Return: int
 */

int sqrt_guess(int n, int p)
{
	int q;

	q = p * p;

	if (q == n)
	{
		return (p);
	}

	if (n < p)
	{
		return (-1);
	}
	else
	{
		p++;
		return (sqrt_guess(n, p));
	}
}
