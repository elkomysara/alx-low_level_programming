#include "main.h"

/**
* puts2 - prints every other character of a string,
* starting with the first character, followed by a new line.
* @str: the string to be printed.
*/
void puts2(char *str)
{
int i = 0;

/* Loop through the string */
while (str[i] != '\0')
{
/* Print every other character */
if (i % 2 == 0)
{
_putchar(str[i]);
}
i++;
}

_putchar('\n'); /* Print a newline character */
}

