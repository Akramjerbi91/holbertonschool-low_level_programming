#include "main.h"
#include <string.h>
/**
 * create_file - creates a file and writes in it
 * @filename: char
 * @text_content: char content
 *
 * Return: -1 on failure 1 on success
 */
int create_file(const char *filename, char *text_content)
{
	int fd, sz;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_EXCL, 0644);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (-1);
	sz = write(fd, text_content, strlen(text_content));
	close(fd);
	return (sz);
}
