#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

/**
 * isNumber - test input is number or not
 * @s: char
 *
 * Return: true or false
 */

bool isNumber(char *s)
{
	size_t i;

	for (i = 0; i < strlen(s); i++)
		if (isdigit(s[i]) == false)
			return (false);

	return (true);
}

/**
 * main - addition
 * @argc: vector count
 * @argv: vector array
 *
 * Return: 1 if Error
 */

int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (isNumber(argv[i]) == false)
			{

				printf("Error\n");
				return (1);
			}
			else
			{
				sum += atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
	}
	else
		printf("0\n");
	exit(EXIT_SUCCESS);
}
