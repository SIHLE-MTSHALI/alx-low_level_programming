#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
/* initialize string */
char *s = "_putchar";
int i = 0;
/* loop through string */
while (s[i] != '\0')
{
_putchar(s[i]);
i++;
}
/* print new line */
_putchar('\n');
return (0);
}
