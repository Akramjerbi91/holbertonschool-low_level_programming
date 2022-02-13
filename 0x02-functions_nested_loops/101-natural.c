#include <stdio.h>

/**
 * main - a program that computes all the multiples of 3 or 5 bellow 1024
 *
 * Return: void
 */


int main(void)
{
	int i, A, B;
	
	i = A = B =0;


	for(i = 3; i < 1024; i++)
{
		if (i % 3 == 0)
			A = A + i;
		else if (i % 5 == 0)
			B = B + i;
}

	printf("%d\n", A + B);

}
