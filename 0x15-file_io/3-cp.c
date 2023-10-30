#include "main.h"
#define ARG_ERROR "Usage: cp file_from file_to\n"
#define READ_ERROR "Error: Can't read from file %s\n"
#define WRITE_ERROR "Error: Can't write to %s\n"
#define CLOSE_ERROR "Error: Can't close fd %d\n"

/**
 * main - copies data from file to another
 * @argc: argument count.
 * @argv: vector of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int fd1 = 0, fd2 = 0;
	ssize_t R;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, ARG_ERROR), exit(97);
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
		dprintf(STDERR_FILENO, READ_ERROR, argv[1]), exit(98);
	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
		dprintf(STDERR_FILENO, WRITE_ERROR, argv[2]), exit(99);
	while ((R = read(fd1, buffer, 1024)) > 0)
		if (write(fd2, buffer, R) != R)
			dprintf(STDERR_FILENO, WRITE_ERROR, argv[2]), exit(99);
	if (R == -1)
		dprintf(STDERR_FILENO, READ_ERROR, argv[1]), exit(98);
	fd1 = close(fd1);
	fd2 = close(fd2);
	if (fd1)
		dprintf(STDERR_FILENO, CLOSE_ERROR, fd1), exit(100);
	if (fd2)
		dprintf(STDERR_FILENO, CLOSE_ERROR, fd2), exit(100);
	return (1);
}
