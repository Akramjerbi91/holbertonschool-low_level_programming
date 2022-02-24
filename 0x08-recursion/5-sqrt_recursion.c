#include "main.h"
int sqrt_guess(int n, int p, int z);

/**
 *_sqrt_recursion - returns the natural square root of a number
 *@n: input
 *
 * Return: root
 */

int _sqrt_recursion(int n)
{
	int p = n / 2;
	int z = n / 4;


	if (n == 1)

		return (1);

	return (sqrt_guess(n, p, z));
}

/**
 * sqrt_guess - finds the sqrt using dicotomy
 * @n: input
 * @p: root
 * @z: zigzag
 *
 * Return: int
 */

int sqrt_guess(int n, int p, int z)
{
	long q = (long)p * (long)p;

	if (q == n)
		return (p);
	if (z == 0)
		return (-1);

	if (q > n)
	p = p - z;

	else
	p = p + z;

	return (sqrt_guess(n, p, z / 2));

}
