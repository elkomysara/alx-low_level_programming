#include <stdio.h>

/**
 * main - prints all
 * the numbers of base 16 in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{

int x;
int y;

for (x = 0; x <= 98; x++)
{
for (y = x + 1; y <= 99; y++)
{
putchar((x / 10) + '0');
putchar((x % 10) + '0');
putchar(' ');
putchar((y / 10) + '0');
putchar((y % 10) + '0');
putchar(',');
putchar(' ');
}
}

putchar('\n');
return (0);
}
