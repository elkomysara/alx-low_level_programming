#include <stdio.h>

/**
* _strcpy - Copies the string pointed to by src,
* including the terminating null byte, to the buffer pointed to by dest
* @dest: Destination buffer
* @src: Source string
*
* Return: Pointer to dest
*/
char *_strcpy(char *dest, char *src)
{

/* Save the starting point of dest to return later */

char *ptr = dest;

while (*src != '\0') /* Loop until the end of the source string */
{
*dest = *src;    /* Copy the current character from src to dest */
dest++;          /* Move to the next character in dest */
src++;           /* Move to the next character in src */
}
*dest = '\0';        /* Add the terminating null byte at the end of dest */

return (ptr);          /* Return the original pointer to dest */
}

