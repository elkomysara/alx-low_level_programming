
#include "main.h"

/**
* _strlen_recursion - returns the length of a string.
* @s: The string to measure.
*
* Return: The length of the string.
*/
int _strlen_recursion(char *s)
{
/* Base case: if we reach the end of the string */
if (*s == '\0')
{
return (0);
}
/* Add 1 for the current character and recurse */
return (1 + _strlen_recursion(s + 1));
}

