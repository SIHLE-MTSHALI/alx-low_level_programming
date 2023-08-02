#include "main.h"

int is_prime_helper(int n, int i);

/**
* is_prime_number - checks if a number is prime
* @n: number to check
* Return: 1 if prime, 0 otherwise
*/
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (is_prime_helper(n, 2));
}

/**
* is_prime_helper - recursive function to check prime
* @n: number to check
* @i: counter
* Return: 1 if prime, 0 otherwise
*/
int is_prime_helper(int n, int i)
{
if (n % i == 0)
return (0);
if (i * i > n)
return (1);
return (is_prime_helper(n, i + 1));
}

