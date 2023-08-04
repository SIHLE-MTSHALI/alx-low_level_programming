#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point, multiplies two numbers
 * @argc: The number of command-line arguments
 * @argv: Array containing the program command-line arguments
 *
 * Return: 0 if successful, 1 if not receive two arguments
 */
int main(int argc, char *argv[])
{
int num1, num2, result;

if (argc != 3)
{
printf("Error\n");
return (1);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
result = num1 *num2;

printf("%d\n", result);
return (0);
}

