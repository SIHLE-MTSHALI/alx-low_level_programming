#include <stdio.h>

/**
 * main - print first 98 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
unsigned long count, i = 1, j = 2, sum;
unsigned long a1, a2, b1, b2, carry, temp1, temp2;

for (count = 1; count <= 98; count++)
{
if (count <= 92)
{
sum = i + j;
i = j;
j = sum;
printf("%lu", sum);
}
else
{
if (count == 93)
{
a1 = i % 10000000000;
b1 = i / 10000000000;
a2 = j % 10000000000;
b2 = j / 10000000000;
}
carry = (a1 + a2) / 10000000000;
temp1 = (a1 + a2) -carry * 10000000000;
temp2 = b1 + b2 + carry;
a1 = a2;
b1 = b2;
a2 = temp1;
b2 = temp2;
printf("%lu%lu", b2, a2);
}
if (count != 98)
printf(", ");
}
printf("\n");
return (0);
}

