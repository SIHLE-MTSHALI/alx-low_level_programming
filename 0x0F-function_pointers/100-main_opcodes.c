#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of the main function
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success, error code on failure
 */
int main(int argc, char *argv[])
{
int i, bytes;
unsigned char *ptr_main;

if (argc != 2)
{
printf("Error\n");
exit(1);
}

bytes = atoi(argv[1]);

if (bytes < 0)
{
printf("Error\n");
exit(2);
}

ptr_main = (unsigned char *)main;

for (i = 0; i < bytes; i++)
{
printf("%02x", ptr_main[i]);
if (i < bytes - 1)
printf(" ");
}
printf("\n");

return (0);
}

