#include "main.h"
#include <stdio.h>

/**
* print_to_98 - prints all natural numbers from n to 98
* @n: integer argument passed to function
* Return: void
*/
void print_to_98(int n)
{
if (n > 98)
{
for (; n > 98; n--)
{
printf("%d, ", n);
}
printf("%d\n", n);
}
else
{
for (; n < 98; n++)
{
printf("%d, ", n);
}
printf("%d\n", n);
}
return;
}
