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
	int count, temp;

	count = temp = 0;
	quarter = 25;
	dime = 10;
	nickel = 5;
	twoPenny = 2;
	penny = 1;

	if (argc == 2)
	{
		if (atoi(argv[1]) >= 0)
		{
			/*Divide input by biggest coin*/
			count += atoi(argv[1]) / quarter;
			/*Store the remainder in variable z*/
			temp = atoi(argv[1]) % quarter;
			/*Divide remainder by second beggest coin and repeat
			 *till last coin*/
			count += temp / dime;
			temp = temp % dime;
			count += temp / nickel;
			temp = temp % nickel;
			count += temp / twoPenny;
			temp = temp % twoPenny;
			count += temp / penny;
			printf("%d\n", count);
		}
		else
			/*argument is negative*/
			printf("0\n");
	}
	else
	{
		/*not exactly one argument*/
		printf("Error\n");
		return (1);
	}
	exit(EXIT_SUCCESS);
}
