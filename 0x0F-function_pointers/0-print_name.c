#include "function_pointers.h"
#include <stddef.h> /* Required for NULL */

/**
 * print_name - Prints a name using the given function
 * @name: Name of the person
 * @f: Function to print the name
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}

