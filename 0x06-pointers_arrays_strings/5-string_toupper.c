#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @str: The string to be converted
 *
 * Return: A pointer to the converted string
 */

char *string_toupper(char *str)
{

while (*str && *str >= 'a' && *str <= 'z')
{

*str -= 'a' - 'A';

str++;
}
return (str);
}
