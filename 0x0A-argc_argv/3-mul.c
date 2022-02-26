#include <stdlib.h>
#include <stdio.h>
/**
 * main -multiplies 2 nums
 *@argc: vectors count
 *@argv: vectors array
 *
 * Return: 1 if error else EXIT_SUCCESS
 */

int main(int argc, char *argv[])
{
	int prod;

	prod = 0;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		prod = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", prod);
		exit(EXIT_SUCCESS);
	}
}
