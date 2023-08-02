#include "main.h"

int is_palindrome_helper(char *s, int start, int end);

/**
* is_palindrome - checks if a string is a palindrome
* @s: string to check
* Return: 1 if palindrome, 0 otherwise
*/
int is_palindrome(char *s)
{
int length = 0;

while (s[length] != '\0')
length++;

return (is_palindrome_helper(s, 0, length - 1));
}

/**
* is_palindrome_helper - recursive function to check palindrome
* @s: string to check
* @start: start index
* @end: end index
* Return: 1 if palindrome, 0 otherwise
*/
int is_palindrome_helper(char *s, int start, int end)
{
if (start >= end)
return (1);
if (s[start] != s[end])
return (0);
return (is_palindrome_helper(s, start + 1, end - 1));
}

