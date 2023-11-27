#include "main.h"
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

void close_file(int fd);

/**
 * main - copies the content of a file to another file
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success, exits with different codes on failure
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, read_status, write_status;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
	{
		close(file_from);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}

	while ((read_status = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		write_status = write(file_to, buffer, read_status);
		if (write_status != read_status)
		{
			close(file_from), close(file_to);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}

	if (read_status == -1)
	{
		close(file_from), close(file_to);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
	}

	close_file(file_from);
	close_file(file_to);
	return (0);
}

/**
 * close_file - Closes a file descriptor and checks for errors
 * @fd: File descriptor to be closed
 */
void close_file(int fd)
{
	int status = close(fd);

	if (status == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd), exit(100);
}

