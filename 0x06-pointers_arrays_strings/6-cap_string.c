#include "main.h"

int is_separator(char c);

/**
* cap_string - Capitalizes all words of a string
* @s: The string to be modified
*
* Return: A pointer to the modified string
*/
char *cap_string(char *s)
{
int i = 0;

/* Capitalize the first character if it is a lowercase letter */
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] -= 'a' - 'A';
}

/* Iterate through the string */
for (i = 1; s[i] != '\0'; i++)
{
/* If the character is a separator and the next character  */
/* is a lowercase letter, capitalize it */
if (is_separator(s[i - 1]) && (s[i] >= 'a' && s[i] <= 'z'))
{
s[i] -= 'a' - 'A';
}
}

return (s);
}

/**
* is_separator - Checks if a character is a word separator
* @c: The character to be checked
*
* Return: 1 if the character is a separator, 0 otherwise
*/
int is_separator(char c)
{
char separators[] = " \t\n,;.!?\"(){}";
int i;

for (i = 0; separators[i] != '\0'; i++)
{
if (c == separators[i])
{
return (1);
}
}

return (0);
}


