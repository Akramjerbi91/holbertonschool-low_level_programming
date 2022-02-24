#include "main.h"
int primes(int n, int p, int z);

/**
 * is_prime_number - checks primality
 * @n: input
 *
 * Return: 1 if input is prime else 0
 */

int is_prime_number(int n)
{
	int p = 2;
	int z = 2;

	if (n > 11)
	{
	z = 11;
	if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0 || n % 11 == 0)
		return (0);
	}

	if (n < 2)
	{
	return (0);
	}
	if (n == 2)
	{
	return (1);
	}
	return (primes(n, p, z));
}
/**
 * primes - walk throw all numbers checks if prime
 * @n: input
 * @p: index
 * @z: optimzation
 * Return: 1 if prime else 0
 */

int primes(int n, int p, int z)
{
	if (p > n / z)
	return (1);


	if (n % p == 0)
	return (0);

	return (primes(n, p + 1, z));
}
