#include "main.h"

int sqrt_helper(int n, int i);

/**
* _sqrt_recursion - returns the natural square root of a number
* @n: number to find the square root of
* Return: natural square root or -1 if no natural square root
*/
int _sqrt_recursion(int n)
{
return (sqrt_helper(n, 0));
}

/**
* sqrt_helper - recursive function to find square root
* @n: number
* @i: counter
* Return: square root or -1
*/
int sqrt_helper(int n, int i)
{
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (sqrt_helper(n, i + 1));
}

