#include "main.h"
#include <stdio.h> /* For putchar */

/**
* _print_rev_recursion - prints a string in reverse.
* @s: The string to print in reverse.
*/
void _print_rev_recursion(char *s)
{
if (*s == '\0') /* Base case: if we reach the end of the string */
{
return;
}
/* Recursively call the function with the next character */
_print_rev_recursion(s + 1);

/* Print the current character after the recursive call */
putchar(*s);
}
