#include "main.h"

/**
 * _strncpy - Copies a string from src to dest up to n characters.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 * @n: Maximum number of characters to copy.
 *
 * Return: Pointer to the destination string (dest).
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
/* Pad with null bytes if n is greater than the length of src */
for (; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
