#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints min number of coins to make change for given amount of money
 * @argc: vector count
 * @argv: vector array
 *
 * Return: 1 if error
 */




int main(int argc, char *argv[])
{
	int penny, twoPenny, nickel, dime, quarter;
	int z, y, x, w;
	int count;

	count = z = y = x = w = 0;
	penny = 1;
	twoPenny = 2;
	nickel = 5;
	dime = 10;
	quarter = 25;

	if (argc == 2)
	{
		if (atoi(argv[1]) >= 0)
		{
			/*Divide input by biggest coin*/
			count += atoi(argv[1]) / quarter;
			/*Store the remainder in variable z*/
			z = atoi(argv[1]) % quarter;
			/*Divide remainder by second beggest coin and repeat*/
			count += z / dime;
			y = z % dime;
			count += y / nickel;
			x = y % nickel;
			count += x / twoPenny;
			w = x % twoPenny;
			count += w / penny;
			printf("%d\n", count);
		}
		else
			printf("0\n");
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	exit(EXIT_SUCCESS);
}
