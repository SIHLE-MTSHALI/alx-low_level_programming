#include "main.h"
#include <unistd.h>
#include <ctype.h>

int _putchar(char c) 
{
  return write(1, &c, 1);
}

int _islower(int c)
{
  if (c >= 'a' && c <= 'z')
    return (1);
  else
    return (0);
}

int _isalpha(int c)
{
  if ((_islower(c)) || (_isupper(c)))
    return (1);
  else
    return (0);  
}

int _abs(int n)
{
  if (n >= 0)
    return (n);
  else 
    return (-n);
}
     
int _isupper(int c)
{
  if (c >= 'A' && c <= 'Z')
    return (1);
  else
    return (0);
}
 
int _isdigit(int c)
{
  if (c >= '0' && c <= '9')
    return (1);
  else
    return (0);  
}

int _strlen(char *s)
{
  int length = 0;
  while (*s++)
    length++;
  return (length);
}

void _puts(char *s)
{
  while (*s) 
    _putchar(*s++);
  _putchar('\n');
} 

char *_strcpy(char *dest, char *src)
{
  int i;
  for (i = 0; src[i] != '\0'; i++)
    dest[i] = src[i];
  dest[i] = '\0';
  return (dest);
}

int _atoi(char *s)
{
  int num = 0;
  int sign = 1;
  for (; *s; s++)
  {
    if (*s == '-')
      sign *= -1;  
    else if (isdigit(*s)) 
        num = (*s - '0') + num * 10;
  }

  return (num * sign);
}

char *_strcat(char *dest, char *src)
{
  int len = _strlen(dest);
  int i;

  for (i = 0 ; src[i] != '\0'; i++)  
    dest[len + i] = src[i];
  dest[len + i] = '\0';
  
  return (dest);  
}

char *_strncat(char *dest, char *src, int n)
{
  int len = _strlen(dest);
  int i;
  
  for (i = 0 ; i < n && src[i] != '\0'; i++)
    dest[len + i] = src[i];
  dest[len + i] = '\0';

  return (dest);
}
  
char *_strncpy(char *dest, char *src, int n)
{
  int i;
  
  for (i = 0; i < n && src[i] != '\0'; i++)
    dest[i] = src[i];
  for ( ; i < n; i++)
    dest[i] = '\0';

  return (dest);
}

int _strcmp(char *s1, char *s2)
{
  while(*s1 && *s2 && *s1 == *s2)
  {
    s1++;
    s2++;
  }
  
  return (*s1 - *s2);
}

char *_memset(char *s, char b, unsigned int n)
{
  unsigned int i;
  
  for (i = 0; i < n; i++)
    s[i] = b;
  
  return (s);
}

char *_memcpy(char *dest, char *src, unsigned int n)
{
  unsigned int i;
  
  for (i = 0; i < n; i++)
    dest[i] = src[i];
    
  return (dest);  
}

char *_strchr(char *s, char c)
{
  while (*s && *s != c)
    s++;

  if (*s == c)
    return (s);
  return (NULL);
}

unsigned int _strspn(char *s, char *accept)
{
  unsigned int count = 0;

  while (*s) 
  {
    if (_strchr(accept, *s++) == NULL)  
      break;
    count++; 
  }

  return (count);
}

char *_strpbrk(char *s, char *accept) 
{
  while (*s)
    if (_strchr(accept, *s) != NULL)
      return (s);  
    else  
      s++;

  return (NULL);
}
 
char *_strstr(char *haystack, char *needle)
{
  char *begin;
  char *pattern;
  
  while (*haystack) 
  {
    begin = haystack;
    pattern = needle;
    
    while (*begin && *pattern && *begin == *pattern)
    {
      begin++;
      pattern++;
    }
    
    if (!*pattern)
      return (haystack);
    
    haystack++;
  }

  return (NULL);
}
