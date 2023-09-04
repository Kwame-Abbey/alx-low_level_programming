#include "main.h"

/**
 * create_file - creates a file
 * @filename: Name of file
 * @text_content: Null terminated string to write to the file
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, fd_write, len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	while (text_content && *(text_content + len))
		len++;

	fd_write = write(fd, text_content, len);

	close(fd);

	if (fd_write < 0)
		return (-1);
	return (1);
}
