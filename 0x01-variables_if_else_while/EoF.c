#include <stdio.h>
#include <ctype.h>

/**
* main - Entry point
* putchar
* Return: Always 0 (sucess)
*/

int main(void)
{
int ch;

/* Read characters until EOF is encountered */
while ((ch = getchar()) != EOF)
{
/* Convert to uppercase and print */
putchar(toupper(ch));
putchar('\n'); /* Add a newline to flush the output buffer */
}

return (0);
}
