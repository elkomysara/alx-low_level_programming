#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
* main - Entry point
* putchar
* Return: Always 0 (sucess)
*/

int main(void)
{
int x;
for (x = 'a'; x <= 'z'; x++)
{
putchar(x);
}
putchar('\n');
return (0);
}
