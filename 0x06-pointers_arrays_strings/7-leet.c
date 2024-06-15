#include "main.h"
/**
* leet - encodes a string into 1337
* @str: input string
*
* Return: string
*/
char *leet(char *str)
{
char *ptr = str;
unsigned char leet_map[256] = {0};  /* Initialize all elements to 0 */

/* Map lowercase and uppercase letters to their 1337 equivalents */
leet_map['a'] = leet_map['A'] = '4';
leet_map['e'] = leet_map['E'] = '3';
leet_map['o'] = leet_map['O'] = '0';
leet_map['t'] = leet_map['T'] = '7';
leet_map['l'] = leet_map['L'] = '1';

/* First loop: traverse the string */
while (*ptr)
{
/* Second loop: only happens if the current character is a mapped character */
if (leet_map[(unsigned char)*ptr])
{
*ptr = leet_map[(unsigned char)*ptr];
}
ptr++;
}

return (str);
}
