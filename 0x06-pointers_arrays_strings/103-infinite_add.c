#include "main.h"
#include <stdio.h>
/**
 * infinite_add - Adds two numbers
 * @num1: The first number
 * @num2: The second number
 * @result: The buffer to store the result
 * @buffer_size: The size of the buffer
 *
 * Return: A pointer to the result or 0 if result can't be stored in result
 */
char *infinite_add(char *num1, char *num2, char *result, int buffer_size)
{
int carry_over = 0;
int length1 = 0, length2 = 0;
while (num1[length1] != '\0')
length1++;
while (num2[length2] != '\0')
length2++;
if (length1 >= buffer_size || length2 >= buffer_size)
return (0);
length1--;
length2--;
result[buffer_size] = '\0';
while (length1 >= 0 || length2 >= 0 || carry_over)
{
if (length1 >= 0)
carry_over += num1[length1--] - '0';
if (length2 >= 0)
carry_over += num2[length2--] - '0';
result[--buffer_size] = (carry_over % 10) + '0';
carry_over /= 10;
}
if (buffer_size > 0)
return (result + buffer_size);
return (0);
}

