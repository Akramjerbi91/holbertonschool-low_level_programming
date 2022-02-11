#include<stdio.h>
#include<math.h>

/**
 * main - a program that prints the max prime num of a long int.
 *
 * Return: Alwys 0.
 */ 


int main (void)
{

    long maxPrime = -1, n;

    
	n = 612852475143;
    while (n % 2 == 0) {
        maxPrime = 2;
    }
    while (n % 3 == 0) {
        maxPrime = 3;
        n = n / 3;
    }
 
    for (int i = 5; i <= sqrt(n); i += 6) {
        while (n % i == 0) {
            maxPrime = i;
            n = n / i;
        }
        while (n % (i + 2) == 0) {
            maxPrime = i + 2;
            n = n / (i + 2);
        }
    }
 
    if (n > 4)
        maxPrime = n;
 	printf("%ld\n", maxPrime);
	return (0)
		;
}
