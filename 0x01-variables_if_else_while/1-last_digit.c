#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point of the program
 * the last digit of a random number stored in the variable n.
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0)); /* Initialize random seed */
n = rand() % 100;
printf("Last digit of %02d is ", n);
if (n % 10 > 5)
printf("%d and is greater than 5\n", n % 10);
else if (n % 10 == 0)
printf("%d and is 0\n", n % 10);
else
printf("%d and is less than 6 and not 0\n", n % 10);
return (0);
}
