#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0;
char *str;
char sep = 0;

va_start(args, format);

while (format && format[i])
{
if (sep)
printf(", ");
switch (format[i])
{
case 'c':
printf("%c", va_arg(args, int));
break;
case 'i':
printf("%d", va_arg(args, int));
break;
case 'f':
printf("%f", va_arg(args, double));
break;
case 's':
str = va_arg(args, char *);
if (str == NULL)
str = "(nil)";
printf("%s", str);
break;
default:
sep = 0;
}
i++; /* Move this line outside the switch to ensure incrementation */
if (format[i - 1] != 'c' && format[i - 1] != 'i' &&
format[i - 1] != 'f' && format[i - 1] != 's')
sep = 0;
else
sep = 1;
}

printf("\n");
va_end(args);
}

