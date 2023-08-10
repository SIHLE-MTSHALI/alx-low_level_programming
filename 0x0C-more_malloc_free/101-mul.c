#include "main.h"
#include <string.h>

/**
 * error_exit - exits with status 98 and prints Error
 */
void error_exit(void)
{
_putchar('E');
_putchar('r');
_putchar('r');
_putchar('o');
_putchar('r');
exit(98);
}

/**
 * is_digit - checks if a string only contains digits
 * @s: string to check
 *
 * Return: 1 if string only contains digits, 0 otherwise
 */
int is_digit(char *s)
{
int i = 0;
while (s[i])
{
if (s[i] < '0' || s[i] > '9')
return (0);
i++;
}
return (1);
}

/**
 * main - multiplies two positive numbers and prints the result
 * @argc: number of arguments passed to the program
 * @argv: array of arguments
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
int i, j, carry, len1, len2, total_len;
int res[10000] = {0};

if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
error_exit();

len1 = strlen(argv[1]);
len2 = strlen(argv[2]);
total_len = len1 + len2;

for (i = len1 - 1; i >= 0; i--)
{
carry = 0;
for (j = len2 - 1; j >= 0; j--)
{
int sum = (argv[1][i] - '0') * (argv[2][j] - '0') + res[i + j + 1] + carry;
res[i + j + 1] = sum % 10;
carry = sum / 10;
}
res[i + j + 1] = carry;
}

for (i = 0; i < total_len; i++)
{
if (i == 0 && res[i] == 0)
continue;
_putchar(res[i] + '0');
}
_putchar('\n');

return (0);
}

