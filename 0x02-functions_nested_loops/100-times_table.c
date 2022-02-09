include "main.h"
/**
 * times_table - prints time table
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	char i = 0, j, n;

	while (n >= 0 && n <= 15)

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (i * j > n)
				{
					_putchar((i * j) / 10 + 48);
					_putchar((i * j) % 10 + 48);
				}
				else
				{
					if (j != 0)
					{
						_putchar(32);
					}
					_putchar((i * j) + 48);
				}
				if (j != 9)
				{
					_putchar(44);
					_putchar(32);
				}
			}
			_putchar(10);

		}
}
