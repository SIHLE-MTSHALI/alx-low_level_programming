#include <stdio.h>

#define SIZE 100

/**
 * add_arrays - add two big numbers represented as arrays of digits
 * @a: first number
 * @b: second number
 * @res: result
 */
void add_arrays(int *a, int *b, int *res)
{
int carry = 0;
for (int i = 0; i < SIZE; i++)
{
res[i] = a[i] + b[i] + carry;
carry = res[i] / 10;
res[i] %= 10;
}
}

/**
 * print_array - print a big number represented as an array of digits
 * @a: number to print
 */
void print_array(int *a)
{
int i = SIZE - 1;
while (i > 0 && a[i] == 0)
i--;
while (i >= 0)
printf("%d", a[i--]);
}

/**
 * main - print first 98 Fibonacci numbers
 * Return: 0 on success
 */
int main(void)
{
int i;
int fib1[SIZE] = {0}, fib2[SIZE] = {1}, fib3[SIZE] = {0};
fib1[0] = 1;
fib2[0] = 2;
printf("%d, %d", fib1[0], fib2[0]);
for (i = 3; i <= 98; i++)
{
add_arrays(fib1, fib2, fib3);
print_array(fib3);
if (i != 98)
printf(", ");
for (int j = 0; j < SIZE; j++)
{
fib1[j] = fib2[j];
fib2[j] = fib3[j];
}
}
printf("\n");
return (0);
}

