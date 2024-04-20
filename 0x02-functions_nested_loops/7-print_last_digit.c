#include "main.h"

/**
 * print_last_digit - prints the lowercase alphabet in reverse
 * @x: The int to extract the last digit from
 * Return: Always 0 (Success)
 */

int print_last_digit(int x)
{

if (x < 0)
{
x = -x;
x = x % 10;
}
if (x < 0)
{
x = -x
}
_putchar('0' + x);
return (x);
}
