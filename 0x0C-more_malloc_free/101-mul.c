#include <stdio.h>
#include <stdlib.h>

/**
* error_exit - Prints "Error" followed by a newline to stderr
* and exits with status 98.
*/
void error_exit(void)
{
fprintf(stderr, "Error\n");
exit(98);
}

/**
* _isdigit - Checks if a string consists only of digits.
* @str: The string to check.
* Return: 1 if all characters are digits, 0 otherwise.
*/
int _isdigit(char *str)
{
while (*str)
{
if (*str < '0' || *str > '9')
return (0);
str++;
}
return (1);
}

/**
* multiply - Multiplies two large numbers represented as strings.
* @num1: The first number as a string.
* @num2: The second number as a string.
* Return: A string representing the result of num1 * num2.
*/
char *multiply(char *num1, char *num2)
{
int len1 = 0, len2 = 0, i, j, carry, sum;
char *result;

/* Calculate lengths */
while (num1[len1])
len1++;
while (num2[len2])
len2++;

/* Allocate memory for the result */
result = malloc(sizeof(char) * (len1 + len2));
if (!result)
return (NULL);

/* Initialize the result with '0' */
for (i = 0; i < len1 + len2; i++)
result[i] = '0';
result[len1 + len2] = '\0';

/* Multiply each digit and store the result */
for (i = len1 - 1; i >= 0; i--)
{
carry = 0;
for (j = len2 - 1; j >= 0; j--)
{
sum = (num1[i] - '0') * (num2[j] - '0') + (result[i + j + 1] - '0') + carry;
carry = sum / 10;
result[i + j + 1] = (sum % 10) + '0';
}
result[i] += carry;
}

/* Skip leading zeros */
i = 0;
while (result[i] == '0' && result[i + 1] != '\0')
i++;

/* Shift the result if necessary */
if (i > 0)
{
for (j = 0; j < len1 + len2 - i; j++)
result[j] = result[j + i];
result[j] = '\0';
}

return (result);
}

/**
* main - Entry point. Multiplies two positive numbers given as arguments.
* @argc: The number of arguments.
* @argv: Array of arguments.
* Return: 0 on success, 98 on error.
*/
int main(int argc, char *argv[])
{
char *num1, *num2, *result;

if (argc != 3 || !_isdigit(argv[1]) || !_isdigit(argv[2]))
error_exit();

num1 = argv[1];
num2 = argv[2];

result = multiply(num1, num2);

if (!result)
error_exit();

printf("%s\n", result);
free(result);
return (0);
}

