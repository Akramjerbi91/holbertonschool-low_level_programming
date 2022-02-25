#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments
 * @argc: count of argv
 * @argv: vectors
 *
 * Return: EXIT_SUCCESS
 */

int main(int argc, char **argv)
{
	while (argc--)
	printf("%s\n", *argv++);
	exit(EXIT_SUCCESS);
}
