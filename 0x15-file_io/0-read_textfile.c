#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX
 * standard output
 * @filename: name of file
 * @letters: Number of letters to be read an print
 * Return: Actual number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t num_bytes_read, num_bytes_write;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	num_bytes_read = read(fd, buffer, letters);
	num_bytes_write = write(STDOUT_FILENO, buffer, num_bytes_read);

	close(fd);

	free(buffer);

	return (num_bytes_write);

}
