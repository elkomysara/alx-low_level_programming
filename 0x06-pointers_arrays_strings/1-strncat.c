#include "main.h"

/**
* _strncat - Concatenates two strings.
* @dest: Pointer to the destination string.
* @src: Pointer to the source string.
* @n:  Maximum number of bytes to append from src.
*
* Return: A pointer to the resulting string (dest).
*/
char *_strncat(char *dest, char *src, int n)
{
char *dest_start = dest;
/* Find the end of the destination string */
while (*dest)
{
dest++;
}
/* loops through the source string, appending characters to dest */
while (n > 0 && *src)
{
*dest = *src;
dest++;
src++;
/* decrement n after each character is copied */
n--;
}
/* Add null terminator if n allows and source string isn;t empty */

*dest = '\0';

/* Return a pointer to the resulting string (dest) */
return (dest_start);

}
