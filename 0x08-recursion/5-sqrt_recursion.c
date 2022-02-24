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
	int p = n / 2;

	if (n == 1)

		return (1);

	return (sqrt_guess(n, p));
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
	int q = p * p;

	if (q == n)
	{
		return (p);
	}
	if (q > n)
	{
		p--;
		return (sqrt_guess(n, p));
	}

	else
	{
		return (-1);
	}
}


