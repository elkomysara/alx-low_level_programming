#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet,
 * in lowercase,
 * followed by a new line
 */

void print_alphabet_x10(void)
{
int x;
int y;

for (y = 0; y < 10; y++)
{
x = 'a';
while (x <= 'z')
{
_putchar(x);
x++;
}
_putchar('\n');
}
}
