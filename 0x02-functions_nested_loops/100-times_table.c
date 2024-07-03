#include <stdio.h>

/**
* print_times_table - prints the n times table, starting with 0.
* @n: the number of the times table
*/
void print_times_table(int n)
{
int i, j, product;

if (n < 0 || n > 15)
{
return;
}

for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
product = i * j;
if (j == 0)
{
printf("%d", product);
}
else
{
printf(",%4d", product);
}
}
printf("\n");
}
}
