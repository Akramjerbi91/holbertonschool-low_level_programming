#include <stdio.h>

/**
 * this program aims to print all combinations of two two digits
 *
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j, k, p;


	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{

			for (k = i; k <= '9'; k++)
			{

				for (p = j; p <= '9'; p++)
				{
					if ((i == j) != (k == p))
					{


						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(p);

						if (i != '9' || j != '8' || k != '9' || p != '9')
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}

	putchar('\n');


	return (0);

}
