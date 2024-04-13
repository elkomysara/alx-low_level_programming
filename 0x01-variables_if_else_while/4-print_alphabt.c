#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int x = 'a';

while (x <= 'z')
{
if (x != 'q' && x != 'e')
{
putchar(x);
}

x++;
}
putchar('\n');
return (0);
}
