#include "main.h"
#include <string.h>
/**
 * append_text_to_file - as the name says
 * @filename: same
 * @text_content: no need for explanation
 *
 * Return: 0 on success -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
int fd = open(filename, O_WRONLY | O_APPEND);

if (filename == NULL)
	return (-1);
if (fd < 0)
{
return (-1);
}
if (text_content == NULL)
	write(fd, 0, 0);
	else
	write(fd, text_content, strlen(text_content));
close(fd);
return (1);
}
