#include "main.h"

/**
 *_stract - Concat. two strings
 *@dest: Thes distination string
 *@src: The Source string
 *
 * Return: A pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, c;
	
	for (i = 0; dest[i] != '\0'; i++)
		;
	for (c = 0; src[c] != '\0'; c++)
	{
		dest[i] = src[c];
		i++;
	}
	dest[i] = '\0';
	return(dest);
}
