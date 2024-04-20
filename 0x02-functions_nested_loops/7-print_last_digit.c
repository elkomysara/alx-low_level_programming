#include "main.h"

/**
 * print_last_digit - prints the last digit of an integer
 * @x: The int to extract the last digit from
 * Return: The last digit of x
 */

int print_last_digit(int x)
{

if (x < 0)
{
x = -x;
}
x = x % 10;
_putchar('0' + x);
return (x);
}
