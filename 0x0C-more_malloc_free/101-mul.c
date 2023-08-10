#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* error_exit - Exit with custom error message.
*/
void error_exit(void)
{
_putchar('E');
_putchar('r');
_putchar('o');
_putchar('r');
_putchar('\n');
exit(98);
}

/**
* is_digit - Check if a string consists only of digits.
* @str: The string to check.
* Return: 1 if string is made of digits, 0 otherwise.
*/
int is_digit(char *str)
{
while (*str)
{
if (*str < '0' || *str > '9')
return (0);
str++;
}
return (1);
}

/**
* main - Multiplies two positive numbers.
* @argc: Argument count.
* @argv: Argument vector.
* Return: 0 on success, 98 on error.
*/
int main(int argc, char *argv[])
{
char *num1, *num2, *result;
int len1, len2, lenr, i, j, carry, temp;

if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
error_exit();

num1 = argv[1];
num2 = argv[2];
len1 = strlen(num1);
len2 = strlen(num2);
lenr = len1 + len2 + 1;
result = calloc(lenr, sizeof(char));
if (!result)
error_exit();

for (i = len1 - 1; i >= 0; i--)
{
carry = 0;
for (j = len2 - 1; j >= 0; j--)
{
temp = (num1[i] - '0') * (num2[j] - '0') + carry + (result[i + j + 1] - '0');
result[i + j + 1] = (temp % 10) + '0';
carry = temp / 10;
}
result[i + j + 1] = carry + '0';
}

for (i = 0; result[i] == '0' && i < lenr - 1; i++)
;
while (i < lenr)
_putchar(result[i++]);
_putchar('\n');

free(result);
return (0);
}

