#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: Filename
 * @text_content: Null terminating string
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, r_write, len;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		fd = open(filename, O_WRONLY | O_APPEND);
		if (fd == -1)
			return (-1);
		length = 0;
		while (*(text_content + len) != '\0')
			len++;
		r_write = write(fd, text_content, len);
		if (r_write == -1)
		{
			close(fd);
			write(STDOUT_FILENO, "fails", 5);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
