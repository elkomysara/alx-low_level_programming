#include <stdlib.h>
#include <string.h>

/**
* string_nconcat - Concatenates two strings.
* @s1: The first string.
* @s2: The second string.
* @n: The maximum number of bytes of s2 to concatenate to s1.
*
* Return: A pointer to the newly allocated space in memory containing s1,
*         followed by the first n bytes of s2, and null terminated.
*         If the function fails, it returns NULL.
*         If s1 or s2 is NULL, treat it as an empty string.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1, len2, len;
char *concat;

/* Treat NULL as empty string */
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

len1 = strlen(s1);
len2 = strlen(s2);

/* If n is greater than or equal to the length of s2, use the entire s2 */
if (n >= len2)
n = len2;

/* Total length of the new string */
len = len1 + n + 1;

/* Allocate memory for the new string */
concat = malloc(len * sizeof(char));
if (concat == NULL)
{
return (NULL);
}

/* Copy s1 to the new string */
strcpy(concat, s1);

/* Concatenate first n bytes of s2 to the new string */
strncat(concat, s2, n);

return (concat);
}
