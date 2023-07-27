#include "main.h"

/**
* cap_string - Capitalizes all words of a string
* @s: String to be capitalized
* Return: Pointer to the capitalized string
*/
char *cap_string(char *s)
{
int i = 0;
int j;
char sep[] = " \t\n,;.!?\"(){}";

while (s[i] != '\0')
{
if (s[0] >= 'a' && s[0] <= 'z')
s[0] = s[0] - 32;
for (j = 0; sep[j] != '\0'; j++)
if (s[i] == sep[j] && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
s[i + 1] = s[i + 1] - 32;
i++;
}
return (s);
}

