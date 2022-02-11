#include<stdio.h>
#include<math.h>

/**
 * maxPrimeNumber - prints the greatest prime divider
 *@n : is an integer
 *
 *Return: max
 */



int maxPrimeNumber(int n)
{

	long long int i, max;
	

	while (n % 2 == 0)
	{
		max = 2;
		n = n / 2;
	}
	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			max = i;
			n = n / i;
		}
	}
	if (n > 2)
	{
		max = n;
	}
	return (max);

}

/**
 * main - a program that prints the max prime num of a long int.
 *
 * Return: the max prime factor of 612852475142
 */

void main (void)
{
	long long int n;

	n = 612852475143;
	printf("%lld\n", maxPrimeNumber(n));

}
