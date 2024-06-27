#include "main.h"
#include <limits.h>
/**
* _atoi - Converts a string to an integer
* @s: The string to be converted
*
* Return: The integer value of the converted string
*/

int _atoi(char *s)
{
int i = 0;
int sign = 1;
int result = 0;
int number_started = 0;

while (s[i] != '\0')
{
int digit; /* Declare digit at the beginning of the block */
/* Skip non-numeric characters except sign symbols */
if (s[i] == '-' && !number_started)
{
sign = -sign;
}
else if (s[i] == '+' && !number_started)
{
/* Just move to the next character */
}
else if (s[i] >= '0' && s[i] <= '9')
{
number_started = 1;
digit = s[i] - '0';

/* Check for potential overflow */
if (result > (INT_MAX - digit) / 10)
{
/* Overflow detected, return max value or min value based on sign */
return (sign > 0 ? INT_MAX : INT_MIN);
}

result = result * 10 + digit;
}
else if (number_started)
{
/* Break on first non-numeric character after starting number */
break;
}
i++;
}

return (sign *result);
}
