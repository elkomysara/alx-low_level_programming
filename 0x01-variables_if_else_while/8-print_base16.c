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
for (x = 0; x <= 9; x++)
{
putchar(x + '0');
}
for (x = 'a'; x <= 'f'; x++)
{
putchar(x);
}
putchar('\n');
return (0);
}
