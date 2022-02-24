#include "main.h"
#include <stdio.h>
int primes(int n, int p);

/**
 * is_prime_number - checks primality
 * @n: input
 *
 * Return: 1 if input is prime else 0
 */

int is_prime_number(int n)
{
	int p = 2;

	printf("begin is prime number n = %d\n", n);
	if (n < 2)
	{
	printf(" %d < 2\n", n);
	return (0);
	}
	if (n == 2)
	{
	printf("%d = 2\n", n);
	return (1);
	}
	return (primes(n, p));
}
/**
 * primes - walk throw all numbers checks if prime
 * @n: input
 * @p: index
 *
 * Return: 1 if prime else 0
 */

int primes(int n, int p)
{
	printf("begin primes n = %d p = %d\n", n, p);
	if (p > n / 2)
	return (1);


	if (n % p == 0)
	return (0);

	return (primes(n, p + 1));
}
