#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * This program prints the alphabet in lowercase, excluding 'q' and 'e',
 * using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char lowercase = 'a';
char uppercase = 'A';

while (lowercase <= 'z')
{
putchar(lowercase);
lowercase++;
}

while (uppercase <= 'Z')
{
putchar(uppercase);
uppercase++;
}

putchar('\n');

return (0);
}

