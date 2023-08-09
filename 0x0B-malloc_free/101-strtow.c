#include "main.h"
#include <stdlib.h>

/**
* count_words - counts words in a string separated by spaces
* @str: the string
* Return: number of words
*/
int count_words(char *str)
{
int i, count = 0, word_started = 0;
for (i = 0; str[i]; i++)
{
if (str[i] == ' ')
word_started = 0;
else
{
if (!word_started)
count++;
word_started = 1;
}
}
return (count);
}

/**
* str_len - calculates the length of a string until a space or null terminator
* @str: the string
* Return: length of the string
*/
int str_len(char *str)
{
int len = 0;
while (str[len] && str[len] != ' ')
len++;
return (len);
}

/**
* copy_word - copies a word from the source string to destination string
* @dest: destination string
* @src: source string
* Return: pointer to the end of the copied word in the destination string
*/
char *copy_word(char *dest, char *src)
{
while (*src && *src != ' ')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (dest);
}

/**
* strtow - splits a string into words
* @str: the string
* Return: pointer to an array of strings
*/
char **strtow(char *str)
{
char **words;
int i, j, w = 0, len;
int words_count = count_words(str);
if (words_count == 0)
return (NULL);
words = malloc((words_count + 1) * sizeof(char *));
if (!words)
return (NULL);
for (i = 0; str[i]; )
{
if (str[i] != ' ')
{
len = str_len(str + i);
words[w] = malloc(len + 1);
if (!words[w])
{
for (j = 0; j < w; j++)
free(words[j]);
free(words);
return (NULL);
}
copy_word(words[w], str + i);
i += len;
w++;
}
else
i++;
}
words[w] = NULL;
return (words);
}

