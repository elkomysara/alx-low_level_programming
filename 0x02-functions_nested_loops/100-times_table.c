
#include <stdio.h>
#include "main.h"

/**
* print_times_table - prints the n times table, starting with 0
* @n: print times table to this number
*/

void print_times_table(int n)
{

int m;
m = 0;

while (m <= n && n <= 15 && n >= 0)
{
int k;
k = 0;
while (k <= n && n <= 15 && n >= 0)
{
if (k == 0)
{
printf("%d", k *m);
}
else
{
if ((k *m) < 10)
{
printf(",   %d", k *m);
}
else if ((k *m) >= 10 && (k *m) < 100)
{
printf(",  %d", k *m);
}
else if ( (k *m) >= 100)
{
printf(", %d", k *m);
}
}
k++;
}
m++;
printf("\n");
}
printf("\n");
}
