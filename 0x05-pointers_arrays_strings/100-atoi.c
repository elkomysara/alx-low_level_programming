#include "main.h"

/**
* _atoi - Converts a string to an integer
* @s: The string to be converted
*
* Return: The integer value of the converted string
*/


int _atoi(char *s)
{
int res = 0;
int sign = 1;
/* To handle negative numbers */

/* Skip leading whitespace */
while (*s == ' ' || (*s >= '\t' && *s <= '\r'))
{
s++;
}

/* Check for sign */
if (*s == '-' || *s == '+')
{
sign = (*s == '-') ? -1 : 1;
s++;
}

/* Convert digits to integer */
while (*s >= '0' && *s <= '9')
{
res = res * 10 + (*s - '0');
s++;
}

return (res *sign);
}
