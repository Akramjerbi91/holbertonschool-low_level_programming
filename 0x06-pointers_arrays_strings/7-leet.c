#include "main.h"

/**
 *leet - changes aeotl by 43071
 *@a: string
 *
 *Return: a
 */


char *leet(char *a)
{
	int i, j;
	char *l = "aAeEoOtTlL";
	char *key = "4433007711";

	for (i = 0; i != '\0'; i++)
	{
		for (j = 0; j < 10; j++)

			if (a[i] == l[j])
			{


				a[i] = key[j];
			}
	}
	return (a);

}
