#include<stdio.h>
#include<math.h>

/**
 * maxPrimeFactors - a function that prints the max prime num of a long int.
 *@n : a positive intiger
 * Return: Alwys 0.
 */

long maxPrimeFactors(long n)
{
	long maxPrime = -1, i;

	while (n % 2 == 0)
	{
		maxPrime = 2;
		n >>= 1;
	}
	while (n % 3 == 0)
	{
		maxPrime = 3;
		n = n / 3;
	}
	for (i = 5; i <= sqrt(n); i += 6)
	{
		while (n % i == 0)
		{
			maxPrime = i;
			n = n / i;
		}
		while (n % (i + 2) == 0)
		{
			maxPrime = i + 2;
			n = n / (i + 2);
		}
	}
	if (n > 4)
		maxPrime = n;
	return (maxPrime);
}


/**
 * main - a program that test the function masPrimeFactor.
 *
 * Return: Alwys 0.
 */


int main(void)
{

	long n;

	n = 612852475143;
	printf("%ld\n", maxPrimeFactors(n));

	return (0);

}
