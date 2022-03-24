#include <string.h>
#include <stdio.h>
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: string of zeros an ones
 *
 * Return: corresponding unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, result;
	unsigned int len = strlen(b);

	result = 0;
	if (b == NULL)
		return (0);
	for (i = 0; i < len; i++)
	{
		if (b[i] == '0')
			continue;
		else if (b[i] == '1')
			result += 1 << (len - i - 1);
		else
			return (0);
	}
	return (result);
}
