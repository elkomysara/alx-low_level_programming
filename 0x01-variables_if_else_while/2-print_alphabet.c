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
for (x = 'A'; x <= 'Z'; x++)
{
putchar(tolower(x));
}
putchar('\n');
return (0);
}
