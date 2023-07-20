#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: the character to check
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
/* Check if character is in range 0-9 (ASCII values 48-57) */
if (c >= '0' && c <= '9')
return (1);

/* If not a digit return 0 */
return (0);
}

