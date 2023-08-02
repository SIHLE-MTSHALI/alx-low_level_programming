#include "main.h"

/**
 * check_palindrome - checks if a string is a palindrome
 * @s: the string to check
 * @start: the starting index
 * @end: the ending index
 * @len: the length of the string
 * Return: 1 if a string is a palindrome, and 0 if not
 */
int check_palindrome(char *s, int start, int end, int len)
{
if (len == 0)
{
if (start >= end)
{
return (1);
}
if (s[start] != s[end])
{
return (0);
}
return (check_palindrome(s, start + 1, end - 1, len));
}
return (check_palindrome(s, start + 1, end, len + 1));
}

/**
 * is_palindrome - Returns 1 if a string is a palindrome and 0 if not
 * @s: the string to check
 * Return: 1 if a string is a palindrome, and 0 if not
 */
int is_palindrome(char *s)
{
int len = 0;
while (s[len] != '\0')
{
len++;
}
return (check_palindrome(s, 0, len - 1, 0));
}

