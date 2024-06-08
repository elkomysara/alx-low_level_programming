#include "main.h"

/**
* _atoi - Converts a string to an integer
* @s: The string to be converted
*
* Return: The integer value of the converted string
*/
int _atoi(char *s)
{
int sign = 1; // To store the sign of the number
int result = 0; // To store the result of the conversion
int started = 0; // Flag to indicate if conversion has started

while (*s != '\0') // Loop through the string until the null terminator
{
if (*s == '-' && !started) // If a minus sign is found and conversion hasn't started
{
sign *= -1; // Flip the sign
}
else if (*s >= '0' && *s <= '9') // If a numeric character is found
{
started = 1; // Indicate that conversion has started
result = result * 10 + (*s - '0'); // Convert character to number and add to result
}
else if (started) // If a non-numeric character is found after conversion has started
{
break; // Stop conversion
}
s++; // Move to the next character
}

return result * sign; // Apply the sign to the result and return
}
