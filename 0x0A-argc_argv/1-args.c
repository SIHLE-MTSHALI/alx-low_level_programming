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
(void)argv; /* To suppress warning since argv is not used */
printf("%d\n", argc - 1);
return (0);
}

