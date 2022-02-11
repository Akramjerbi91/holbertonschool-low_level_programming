#include<stdio.h>
#include<math.h>

/**
 * main - a program that prints the max prime num of a long int.
 *
 * Return: the max prime factor of 612852475142
 */

int main(void)
{

	long int i, max, n;

	n = 612852475143;

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
	printf("%ld",max);

}
