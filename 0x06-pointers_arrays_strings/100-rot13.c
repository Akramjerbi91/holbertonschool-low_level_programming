#include "main.h"

/**
 * rot13 - rotate a string by 13 alphabeticly
 * @a: string
 *
 * Return: a
 */



char *rot13(char *a)

{
	int i, j;

	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rotkey[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdeghijklm";


for (i = 0; a[i] != '\0'; i++)
	{

	for (j = 0; alpha[j] != '\0'; j++)
	{
	if (a[i] == alpha[j])
	{
	a[i] = rotkey[j];
	break;
	}

	}
	}
	return (a);

}
