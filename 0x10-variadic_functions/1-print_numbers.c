#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints nums with separator
 * @separator: const char
 * @n: unsigned int
 * @...: ints
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i <= n; i++)
	{
		if (separator != NULL && i != n - 1)
		printf("%d%s", va_arg(ap, unsigned int), separator);
		else
		printf("%d", va_arg(ap, unsigned int));
	}
	va_end(ap);
	putchar('\n');
}
