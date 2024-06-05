#include "main.h"

/**
* _puts - prints a string followed by a new line to stdout.
* @str: the string to be printed.
*/
void _puts(char *str)
{
while (*str != '\0') /* Loop until the end of the string */
{
_putchar(*str); /* Print each character */
str++;  /* Move to the next character */
}
_putchar('\n'); /* Print a newline character at the end */
}
