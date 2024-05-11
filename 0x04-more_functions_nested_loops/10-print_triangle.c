#include "main.h"

/**
 * print_triangle - Write a function that prints a triangle,
 * followed by a new line.
 * @size: is the size of the triangle.
 */
void print_triangle(int size)
{
int i = 0;
int j;
if (size <= 0)
{
_putchar('\n');
}
else
{
while (i < size)
{
j = 0;
while (j < size)
{
_putchar(' ');
if (j == size)
{
_putchar('#');
}
_putchar('\n');
j++;
}
_putchar('\n');
i++;
}
}

}
