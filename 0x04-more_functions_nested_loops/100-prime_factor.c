#include<stdio.h>
#include<math.h>

/**
 *getMaxPrimeFactor - function that finds the biggest prime factor
 *@n : an integer that we have to test
 *
 * Return: max
 */

int getMaxPrimeFactor(int n)
{

	long int i, max;

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
 * Return: the max prime factor of 612852475143
 */

int main(void)
{
	long int n;

	n = 612852475143;

	printf("%ld", getMaxPrimeFactor(n));
}
