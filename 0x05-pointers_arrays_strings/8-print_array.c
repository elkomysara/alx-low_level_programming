#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: array of integers
 * @n: number of elements to print
 */

void print_array(int *a, int n)
{
int i;

/* for loop for the array */
for (i = 0; i < n; i++)
{
/* sperate numbers by comma, followed by a space */
if (i != 0)
{
printf(", ");
}
/* displayed in the same order as they are stored in the array */
printf("%d", a[i]);
}

/* Print a newline character */
printf("\n"); 
}

