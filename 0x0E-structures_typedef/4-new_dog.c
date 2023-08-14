#include "dog.h"
#include <stdlib.h>
#include <stddef.h>

/**
* _strdup - returns a pointer to a newly allocated space in memory,
* which contains a copy of the string given as a parameter.
* @str: string
* Return: pointer to duplicated string or NULL if error
*/
char *_strdup(char *str)
{
char *dup;
int i = 0, len = 0;

if (!str)
return (NULL);
while (str[len])
len++;
dup = malloc(sizeof(char) * (len + 1));
if (!dup)
return (NULL);
while (i < len)
{
dup[i] = str[i];
i++;
}
dup[i] = '\0';
return (dup);
}

/**
* new_dog - Creates a new dog structure
* @name: Name of the dog
* @age: Age of the dog
* @owner: Owner of the dog
* Return: Pointer to the new dog structure
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *doggo;

doggo = malloc(sizeof(dog_t));
if (!doggo)
return (NULL);

doggo->name = _strdup(name);
if (!(doggo->name))
{
free(doggo);
return (NULL);
}

doggo->owner = _strdup(owner);
if (!(doggo->owner))
{
free(doggo->name);
free(doggo);
return (NULL);
}

doggo->age = age;
return (doggo);
}

