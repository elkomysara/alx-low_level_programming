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
result = result * 10 + (s[i] - '0');
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
