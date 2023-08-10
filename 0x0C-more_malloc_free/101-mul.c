#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERROR_MESSAGE "Error"

/**
* validate_string_as_number - checks if string is a number
* @str: string to check
*
* Return: 1 if string is a number, 0 otherwise
*/
int validate_string_as_number(char *str)
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
* string_length - finds the length of a string
* @str: string to check
*
* Return: length of the string
*/
int string_length(char *str)
{
int len = 0;
while (*str++)
len++;
return (len);
}

/**
* display_error_and_exit - prints error message and exits
*/
void display_error_and_exit(void)
{
printf("%s\n", ERROR_MESSAGE);
exit(98);
}

/**
* perform_multiplication - handles the core multiplication logic
* @num1: first number as a string
* @num2: second number as a string
* @len_num1: length of num1
* @len_num2: length of num2
*
* Return: pointer to the product array
*/
int *perform_multiplication(char *num1, char *num2, int len_num1, int len_num2)
{
int *product, idx, carry, digit_num1, digit_num2, total_length;

total_length = len_num1 + len_num2 + 1;
product = malloc(sizeof(int) * total_length);
if (!product)
return (NULL);
for (idx = 0; idx <= len_num1 + len_num2; idx++)
product[idx] = 0;

for (; len_num1 >= 0; len_num1--)
{
digit_num1 = num1[len_num1] - '0';
carry = 0;
for (len_num2 = string_length(num2) - 1; len_num2 >= 0; len_num2--)
{
digit_num2 = num2[len_num2] - '0';
carry += product[len_num1 + len_num2 + 1] + (digit_num1 *digit_num2);
product[len_num1 + len_num2 + 1] = carry % 10;
carry /= 10;
}
if (carry > 0)
product[len_num1 + len_num2 + 1] += carry;
}
return (product);
}

/**
* main - multiplies two positive numbers
* @arg_count: number of arguments
* @args: array of arguments
*
* Return: 0 on success, 1 on failure
*/
int main(int arg_count, char **args)
{
char *num1, *num2;
int len_num1, len_num2, total_length, idx, flag = 0;
int *product;

num1 = args[1];
num2 = args[2];

if (arg_count != 3 || !validate_string_as_number(num1) ||
!validate_string_as_number(num2))
display_error_and_exit();

len_num1 = string_length(num1);
len_num2 = string_length(num2);
total_length = len_num1 + len_num2 + 1;

product = perform_multiplication(num1, num2, len_num1, len_num2);
if (!product)
return (1);

for (idx = 0; idx < total_length - 1; idx++)
{
if (product[idx])
flag = 1;
if (flag)
_putchar(product[idx] + '0');
}
if (!flag)
_putchar('0');
_putchar('\n');

free(product);
return (0);
}

