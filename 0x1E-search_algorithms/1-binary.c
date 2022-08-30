#include <stdio.h>

void print_array(int *array, int s);
/**
 * binary_search - binary searche for a value in an array of integers
 * @array: integer array
 * @size: as named
 * @value: cach me if u can
 * Return: Always EXIT_SUCCESS
 */
int binary_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size;

	while (low <= high)
	{
		int mid = low + (high - low) / 2;

		print_array(array, mid);

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			low = mid + 1;

		else
			high = mid - 1;
	}

	return (-1);
}

/**
 * print_array - print array
 * @array: integer array
 * @s: size
 * Return: VOID
 */
void print_array(int *array, int s)
{
	int loop;

	printf("Searching in array: ");

	for (loop = 0; loop < s; loop++)
		printf("%d", array[loop]);

	printf("\n");
}
