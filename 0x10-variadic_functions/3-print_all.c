#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_all - Prints anything, followed by a new line.
* @format: A list of types of arguments passed to the function.
*
* Description: c: char, i: integer, f: float,
*              s: char * (if the string is NULL, print (nil) instead)
*              Any other char should be ignored.
*              Print a new line at the end of the function.
*/
void print_all(const char * const format, ...)
{
va_list args;
int i = 0;
char *str, *separator = "";

va_start(args, format);

while (format && format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", separator, va_arg(args, int));
break;
case 'i':
printf("%s%d", separator, va_arg(args, int));
break;
case 'f':
printf("%s%f", separator, va_arg(args, double));
break;
case 's':
str = va_arg(args, char *);
if (str == NULL)
str = "(nil)";
printf("%s%s", separator, str);
break;
default:
i++;
continue;
}
separator = ", ";
i++;
}

printf("\n");
va_end(args);
}
