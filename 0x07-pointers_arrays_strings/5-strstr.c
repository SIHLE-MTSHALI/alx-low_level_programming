#include "main.h"
/**
*_strstr - Locates a substring
*@haystack: The string to be searched
*@needle: The substring to be located
*
*Return: A pointer to the beginning of the located substring
*/
char *_strstr(char *haystack, char *needle)
{
char *start = needle;
while (*haystack)
{
char *sub_haystack = haystack;
needle = start;
while (*haystack && *needle && *haystack == *needle)
{
haystack++;
needle++;
}
if (!*needle)
return (sub_haystack);
haystack = sub_haystack + 1;
}
return (0);
}

