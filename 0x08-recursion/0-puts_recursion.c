#include "main.h"
#include <stdio.h> /* For putchar */

/**
* _puts_recursion - prints a string followed by a new line.
* @s: The string to print.
*/
void _puts_recursion(char *s)
{
if (*s == '\0') /* Base case: if we reach the end of the string */
{
putchar('\n'); /* Print a new line */
return;
}

putchar(*s); /* Print the current character */
/* Recursively call the function with the next character */
_puts_recursion(s + 1);

}
