#include "main.h"

/**
* _strcat - Concatenates two strings.
* @dest: The destination string.
* @src: The source string to append.
*
* Return: A pointer to the resulting string (dest).
*/
char *_strcat(char *dest, char *src)
{

/* Move to the end of dest */
while (*dest)
{
dest++;
}

/* Append src to dest */
while (*src)
{
*dest = *src;
dest++;
src++;
}

/* Add null terminator */
*dest = '\0';
/* Returns a pointer to the resulting string dest */
return (dest);
}
