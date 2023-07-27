#include "main.h"

/**
* reverse_array - Reverses the content of an array of integers
* @a: Array to be reversed
* @n: Number of elements in the array
* Return: Nothing
*/
void reverse_array(int *a, int n)
{
int start, end, temp;
start = 0;
end = n - 1;
while (start < end)
{
temp = a[start];
a[start] = a[end];
a[end] = temp;
start++;
end--;
}
}

