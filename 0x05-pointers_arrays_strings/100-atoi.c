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
int res = 0;
int sign = 1;
int found_digit = 0;
while (*s == ' ' || (*s >= '\t' && *s <= '\r'))
{
s++;
}
if (*s == '-' || *s == '+')
{
sign = (*s == '-') ? -1 : 1;
s++;
}
while (*s)
{
if (*s >= '0' && *s <= '9')
{
if (res > INT_MAX / 10 || (res == INT_MAX / 10 && (*s - '0') > INT_MAX % 10))
{
return ((sign == 1) ? INT_MAX : INT_MIN);
}
res = res * 10 + (*s - '0');
found_digit = 1;
}
else
{
if (found_digit)
{
break;
}
}
s++;
}
return (res *sign);
}
