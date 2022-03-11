#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: char
 * @n: unsined int
 * @...: strings
 *
 * Return; voic
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		char *a = va_arg(ap, char*);

	if (a != NULL)
		printf("%s", a);
	else
		printf("(nill)");
	if (separator != NULL && i != n - 1)
		printf("%s", separator);
	}
	va_end(ap);
	putchar('\n');
}
