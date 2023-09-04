#include <stdio.h>
#include "main.h"

void check_arguments(int argc);
void check_file_from(int file_from, char *filename);
void check_file_to(int file_to, char *filename);

/**
* main - Entry point. Copies one file to another.
* @argc: Number of arguments.
* @argv: Arguments vector.
* Return: 0 on success, or one of the three exit codes on failure.
*/
int main(int argc, char *argv[])
{
int file_from, file_to, n_read, n_write;
char buffer[1024];
check_arguments(argc);
file_from = open(argv[1], O_RDONLY);
check_file_from(file_from, argv[1]);
file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
check_file_to(file_to, argv[2]);
while ((n_read = read(file_from, buffer, 1024)) > 0)
{
n_write = write(file_to, buffer, n_read);
if (n_write != n_read)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
}
if (n_read == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
if (close(file_from) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
exit(100);
}
if (close(file_to) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
exit(100);
}
return (0);
}

/**
* check_arguments - Checks that the correct number of arguments were passed.
* @argc: Number of arguments.
*/
void check_arguments(int argc)
{
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
}

/**
* check_file_from - Checks that file_from exists and can be read.
* @file_from: The file descriptor.
* @filename: The name of the file.
*/
void check_file_from(int file_from, char *filename)
{
if (file_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
exit(98);
}
}

/**
* check_file_to - Checks that file_to can be created or truncated.
* @file_to: The file descriptor.
* @filename: The name of the file.
*/
void check_file_to(int file_to, char *filename)
{
if (file_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
exit(99);
}
}

