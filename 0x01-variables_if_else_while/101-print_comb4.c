#include <stdio.h>

/**
 * main - prints all possible
 * different combinations of two digits.
 * Return: Always 0 (Success)
 */

int main(void)
{
int x;
int y;
int z;

y = 0;
for (x = 0; x <= 7; x++)
{
for (y = 1; y <= 8; y++)
{
for (z = 2; z <= 9; z++)
{
if (z > y && y > x)
{
putchar(x + '0');
putchar(y + '0');
putchar(z + '0');
if (x < 7 || y < 8 || z < 9)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
