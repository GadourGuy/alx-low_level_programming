#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX
 * @filename: file to be read
 * @letters: number of letters.
 *
 * Return: number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t read_data;
	ssize_t count;
	int fd;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	read_data = read(fd, buffer, letters);
	if (read_data == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	count = write(STDOUT_FILENO, buffer, read_data);
	if (count == -1 || (size_t)count != (size_t)read_data)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	close(fd);
	free(buffer);
	return (read_data);
}
