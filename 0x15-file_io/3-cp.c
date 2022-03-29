#include "main.h"
/**
 * cp - copies file to file
 * @file_from: source file
 * @file_to: dest file
 *
 * Return: new file
 */
void cp(char *file_from, char *file_to)
{
	int ff, ft, sz;
	char buf[1024];

	ff = open(file_from, O_RDONLY);
	if (file_from == NULL || ff == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	ft = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	while ((sz = read(ff, buf, 1024) > 0))
			{
			if (write(ft, buf, sz) == -1)
			{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
			}
		}
	if (sz == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	if (close(ff) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ff);
		exit(100);
	}
	if (close(ft) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ft);
		exit(100);
	}
}
/**
 * main - main func
 * @ac: argument count
 * @av: arg value
 *
 * Return: zero on success
 */
int main(int ac, char **av)
{

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}
	cp(av[1], av[2]);
	return (0);
}
