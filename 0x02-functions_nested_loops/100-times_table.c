
#include <stdio.h>
#include "main.h"

/**
* print_times_table - prints the n times table, starting with 0
* @n: number of the times table
*/

void print_times_table(int n)
{
int i;
if (n < 0 || n > 15)
{
/* Invalid input, so we won't print anything */
return;
}

for (i = 0; i <= n; ++i)
{
int j;
for (j = 0; j <= n; ++j)
{
int result = i * j;
printf(",%4d", result);
}
printf("\n");
}
printf("\n");
}
