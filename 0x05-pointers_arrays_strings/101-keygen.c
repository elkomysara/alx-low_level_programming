
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - generates random valid passwords for the program 101-crackme.
*
* Return: Always 0
*/
int main(void)
{
/* declares an array called 'pass with a size of 100 integers' */
int pass[100];
int i;
int sum;
int n;
sum = 0;

srand(time(NULL));

for (i = 0; i < 100; i++)
{
pass[i] = rand() % 78;
sum += (pass[i] + '0');
putchar(pass[i] + '0');
if ((2772 - sum) -'0' < 78)
{
n = 2772 - sum - '0';
sum += n;
putchar(n + '0');
break;
}
}
return (0);
}
