#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char str[] = "_putchar";
int x;
for (x = 0; x < 8; x++)
{
_putchar(str[x]);
}
_putchar('\n');
return (0);
}
