#include "main.h"

/**
*_isupper - checks for uppercase character
*@c: the character to check
*Return: 1 if c is uppercase, 0 otherwise
*/
int _isupper(int c)
{
/* Check if character is in range A-Z (ASCII values 65-90) */
if (c >= 'A' && c <= 'Z')
return (1);

/* If not uppercase return 0 */
return (0);
}

