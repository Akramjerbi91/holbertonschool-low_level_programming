#include "main.h"

/**
 *_abs - a function that prints the sign of a number.
 *@n: n is an integer
 *
 * Return: Result if n is negative, print n if it is positive or 0
 */


int _abs(int n)

{




	if (n < 0)
{
	n = n * -1;
	return(n);
}
	else 
{
	return (n);
}
	
}