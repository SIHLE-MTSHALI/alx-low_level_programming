#include "main.h"
/**
* append_text_to_file - Appends text at the end of a file.
* @filename: Name of the file.
* @text_content: NULL terminated string to add at the end of the file.
* Return: 1 on success, -1 on failure.
*/
int append_text_to_file(const char *filename, char *text_content)
{
int fd, n_write, length = 0;
if (!filename)
return (-1);
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);
if (text_content)
{
while (text_content[length])
length++;
n_write = write(fd, text_content, length);
if (n_write == -1)
return (-1);
}
close(fd);
return (1);
}

