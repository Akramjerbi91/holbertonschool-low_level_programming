#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i, j, k;
i = 0;
j = 0;
k = 0;

for (i = '0'; i <= '9'; i++)
{
	for (j = i; j <= '9'; j++)
	for (k = j; k <= '9'; k++)
	{
	if ((((i != j && j != k) &&(j != '0' || j != '1'))))
{

	putchar(i);
	putchar(j);
	putchar(k);
	if (i < '7')
	{
	putchar(',');	/* code */
	putchar(' ');
	}
	}


}
}
	putchar('\n');

return (0);

}
