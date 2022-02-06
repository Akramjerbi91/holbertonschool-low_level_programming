#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i, j, k, p;

for (i = '0'; i <= '9'; i++)
{
	for (j = i; j <= '9'; j++)
	for (k = j; k <= '9'; k++)
		for (p = k; p <= '9'; p++)
	{
	if (i != j || i != k || i != p || j != k)
{
	putchar(i);
	putchar(j);
	putchar(' ');
	putchar(k);
	putchar(p);
	putchar(',');
		/* code */
}	
	
	}


}
	putchar('\n');

return (0);

}
