#include <stdio.h>

/**
* main - print sum of even Fibonacci numbers under 4,000,000
* Return: Always 0 (Success)
*/
int main(void)
{
unsigned long num1 = 1, num2 = 2, sum = 0, total = 2;

while (sum <= 4000000)
{
sum = num1 + num2;
if (sum % 2 == 0)
total += sum;
num1 = num2;
num2 = sum;
}
printf("%lu\n", total);
return (0);
}

