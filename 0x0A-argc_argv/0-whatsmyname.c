#include <stdio.h>
/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: Array containing the program command-line arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
(void)argc; /* To suppress warning since argc is not used */
printf("%s\n", argv[0]);
return (0);
}

