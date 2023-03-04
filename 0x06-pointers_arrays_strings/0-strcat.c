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
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++]
	return (dest);
}
