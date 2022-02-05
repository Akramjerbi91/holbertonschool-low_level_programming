#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int x, y;
x = 0;
y = 0;

for (x = '0'; x <= '9'; x++)
{
	for (y = x; y <= '9'; y++)
	{
	if (((x != y && (y != '0' || y != '1'))) && (y <= '9' && x <= '8'))
{

	putchar(x);
	putchar(y);
	if (x < '8')
{
	putchar(',');
	putchar(' ');
	}
	}


}
}
	putchar('\n');
return (0);

}
