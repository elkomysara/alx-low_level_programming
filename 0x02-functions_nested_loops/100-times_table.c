#include <stdio.h>
#include "main.h"
/**
* print_times_table - prints the n times table, starting with 0
* @n: number of the times table
*/
void print_times_table(int n)
{
int i = 0, j, k;

if (n >= 0 && n <= 15)
{
while (i <= n)
{
j = 0;
while (j <= n)
{
k = j *i;
if (j == 0)
{
printf("%d", k);
}
else if (k < 10 && j != 0)
{
printf(",%4d", k);
}
else if (k >= 10 && k < 100)
{
printf(", %3d", k);
}
else if (k >= 100)
{
printf(", %d", k);
}
j++;
}
printf("\n");
i++;
}
}
printf("\n");
}

