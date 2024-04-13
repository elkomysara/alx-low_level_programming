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
int y;
for (x = 'A'; x <= 'Z'; x++)
{
printf("%c\n", tolower(x));
}
for (y = 'a'; y <= 'z'; y++)
{
printf("%c\n", toupper(y));
}
return (0);
}
