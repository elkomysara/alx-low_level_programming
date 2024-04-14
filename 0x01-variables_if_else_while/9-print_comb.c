#include <stdio.h>

/**
 * main -  prints all
 * possible combinations of single-digit numbers.
 * Return: Always 0 (Success)
 */

int main(void)
{
int x;
x = 0;
while (x <= 9)
{
putchar(x + '0');
if (x != 9)
{
putchar(',');
putchar(' ');
}
x++;
}
putchar('\n');
return (0);
}
