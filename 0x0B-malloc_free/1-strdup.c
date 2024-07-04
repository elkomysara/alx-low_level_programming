#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* _strdup - returns a pointer to a newly allocated space in memory,
*           which contains a copy of the string given as a parameter.
* @str: the string to duplicate
*
* Return: pointer to the duplicated string, or NULL if insufficient memory
*         was available or str is NULL.
*/
char *_strdup(char *str)
{
char *dup_str;
int len;

if (str == NULL)
{
return (NULL);
}

len = strlen(str);
dup_str = malloc((len + 1) * sizeof(char));
/* Allocate memory for the new string */

if (dup_str == NULL)
{
return (NULL);
/* Return NULL if malloc fails */
}

strcpy(dup_str, str);
/* Copy the string to the newly allocated memory */
return (dup_str);
}
