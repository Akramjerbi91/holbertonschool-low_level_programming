#include "main.h"
/**
 * read_textfile - reads and writes texfile
 * @filename: char pointer
 * @letters: number of letters
 *
 * Return: the actual number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, sz;
	char *buf = malloc(letters);

	if (buf == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	sz = read(fd, buf, letters);
	write(STDOUT_FILENO, buf, sz);
	free(buf);
	close(fd);
	return (sz);
}
