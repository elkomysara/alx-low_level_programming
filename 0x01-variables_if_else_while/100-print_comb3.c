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

y = 0;
for (x = 0; x <= 8; x++)
{
for (y = 1; y <= 9; y++)
{
if (y > x)
{
putchar(x + '0');
putchar(y + '0');
if (x < 8 || y < 9)
{
putchar(',');
putchar(' ');
}

}

}
}
putchar('\n');
return (0);
}
