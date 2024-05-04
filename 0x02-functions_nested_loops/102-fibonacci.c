
#include "main.h"
#include <stdio.h>

/**
* main - prints the n times table, starting with 0
* Return: Always 0.
*/

int main(void)
{
int fibonacci[50];
int i;
fibonacci[0] = 1;
fibonacci[1] = 2;

printf("%d, %d", fibonacci[0], fibonacci[1]);

for (i = 2; i < 50; i++)
{
fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
printf(", %d", fibonacci[i]);
}

printf("\n");
return (0);
}
