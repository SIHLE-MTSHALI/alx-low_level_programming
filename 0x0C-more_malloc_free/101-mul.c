#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* error_exit - exits with a status of 98 and prints Error
*/
void error_exit(void)
{
printf("Error\n");
exit(98);
}

/**
* is_digit - checks if a string contains only digits
* @s: string to check
* Return: 1 if s contains only digits, 0 otherwise
*/
int is_digit(char *s)
{
if (!*s)
return (0);

while (*s)
{
if (*s < '0' || *s > '9')
return (0);
s++;
}

return (1);
}

/**
* main - multiplies two numbers and prints the result
* @argc: number of arguments
* @argv: array of argument strings
* Return: Always 0
*/
int main(int argc, char *argv[])
{
if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
error_exit();

printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}

