#include "variadic_functions.h"
#include <stddef.h>

/**
* print_number - prints an integer using _putchar
* @n: the integer to print
*/
void print_number(int n)
{
unsigned int num;

if (n < 0)
{
_putchar('-');
num = -n;
}
else
{
num = n;
}

if (num / 10)
{
print_number(num / 10);
}
_putchar((num % 10) + '0');
}

/**
* print_string - prints a string using _putchar
* @str: the string to print
*/
void print_string(const char *str)
{
while (*str)
{
_putchar(*str++);
}
}

/**
* print_numbers - prints numbers, followed by a new line
* @separator: the string to be printed between numbers
* @n: the number of integers passed to the function
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
print_number(number);
if (separator != NULL && i < n - 1)
{
print_string(separator);
}
}
_putchar('\n');

va_end(args);
}
