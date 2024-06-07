#include "main.h"

/**
* puts_half - prints every other character of a string,
* starting with the first character, followed by a new line.
* @str: the string to be printed.
*/
void puts_half(char *str)
{
int i = 0; /* printing counter*/
int length = 0; /* counter for the if condition*/

/* Calculate the length of the string */
while (str[length] != '\0')
{
length++;
}

/* Determine the starting point for the printing */
if (length % 2 == 0)
{
i = length / 2;
}
else
/* printing the last n characters of the string */
/* n = (length_of_the_string -1)/2 */
{
i = (length - 1) / 2;
}

/* Print the second half of the string */
while (i < length)
{
_putchar(str[i]);
i++;
}

/* Print a newline character */
_putchar('\n');
}

