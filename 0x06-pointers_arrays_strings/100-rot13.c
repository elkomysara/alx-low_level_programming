#include "main.h"
#include <stdio.h>

/**
* rot13 - encodes a string using rot13
* @str: the input string to be encoded
*
* Description: This function encodes a string using the ROT13 cipher.
*              ROT13 is a simple letter substitution cipher that replaces
*              a letter with the letter 13 letters after it in the alphabet.
*              It is primarily used for obfuscation.
*              This implementation uses a single 'if' statement
*              and two loops, adhering to specific constraints.
*
* Return: The encoded string
*/

char *rot13(char *str)
{
char *ptr = str;
char rot13_map[256] = {0};
int i;
/* populate the ROT13 mapping array */

for (i = 0; i < 26; i++)
{
rot13_map['a' + i] = 'a' + (i + 13) % 26;
rot13_map['A' + i] = 'A' + (i + 13) % 26;
}

/* Traverse the string and apply the ROT13 transformation */
while (*ptr)
{
if (rot13_map[(unsigned char)*ptr])
{
*ptr = rot13_map[(unsigned char)*ptr];
}
ptr++;
}

return (str);

}

