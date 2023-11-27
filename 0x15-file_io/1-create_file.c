#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - creates a file
 * @filename: the name of the file to create
 * @text_content: the content to write into the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int status;
	ssize_t len = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
		status = write(fd, text_content, len);
		if (status == -1 || status != len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}

