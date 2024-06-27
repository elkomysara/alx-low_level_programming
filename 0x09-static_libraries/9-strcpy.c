#include <stdio.h>

/**
* _strcpy - Copies the string pointed to by src,
* including the terminating null byte, to the buffer pointed to by dest
* @dest: Destination buffer
* @src: Source string
*
* Return: Pointer to dest
*/
char *_strcpy(char *dest, const char *src)
{

/* Save the starting point of dest to return later */

char *ptr = dest;

while (*src) /* Loop until the end of the source string */
{
*dest++ = *src++;    /* Copy the current character from src to dest */
}
*dest = '\0';        /* Add the terminating null byte at the end of dest */

return (ptr);          /* Return the original pointer to dest */
}

