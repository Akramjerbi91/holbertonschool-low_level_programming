#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints his name
 * @argc: count argv
 * @argv: vector
 *
 * Return: EXIT_SUCCESS
 */


int main(int argc, char **argv)
{
	if (argc)
		printf("%s\n", argv[0]);
	exit(EXIT_SUCCESS);
}
