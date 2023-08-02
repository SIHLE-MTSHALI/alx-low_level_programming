#include "main.h"

/**
 * find_length - finds the length of a string
 * @s: the string
 * @len: the current length
 * Return: the length of the string
 */
int find_length(char *s, int len)
{
if (s[len] == '\0')
return (len);
return (find_length(s, len + 1));
}

/**
 * check_palindrome - checks if a string is a palindrome
 * @s: the string to check
 * @start: the starting index
 * @end: the ending index
 * Return: 1 if a string is a palindrome, and 0 if not
 */
int check_palindrome(char *s, int start, int end)
{
if (start >= end)
return (1);
if (s[start] != s[end])
return (0);
return (check_palindrome(s, start + 1, end - 1));
}

/**
 * is_palindrome - Returns 1 if a string is a palindrome and 0 if not
 * @s: the string to check
 * Return: 1 if a string is a palindrome, and 0 if not
 */
int is_palindrome(char *s)
{
int len = find_length(s, 0);
return (check_palindrome(s, 0, len - 1));
}

