#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_numbers - prints numbers, followed by a new line
* @separator: the string to be printed between numbers
* @n: the number of integers passed to the function
*
* Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
int number;

va_start(args, n);

for (i = 0; i < n; i++)
{
number = va_arg(args, int);
printf("%d", number);
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
printf("\n");

va_end(args);
}
