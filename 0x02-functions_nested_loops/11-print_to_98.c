#include "main.h"

/**
 * print_to_98 - a function that prints
 * all natural numbers from n to 98, followed by a new line.
 * @n: integer
 * Return: Always 0 (Success)
 */

void print_to_98(int n)
{
int x;
x = n;
if (n <= 98)
{
while (x < 99)
{
if (x > n)
{
printf(", %d", x);
}
else
{
printf("%d", x);
}
x++;
}
printf("\n");
}
else
{
while (x > 97)
{
if (x < n)
{
printf(", %d", x);
}
else
{
printf("%d", x);
}
x--;
}
printf("\n");
}
}
