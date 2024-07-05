#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void initialize_result_array(int *result, int len);
char *convert_result_to_string(int *result, int len1, int len2);

/**
* multiply - Multiplies two large numbers represented as strings.
* @num1: The first number as a string.
* @num2: The second number as a string.
* Return: A string representing the result of num1 * num2.
*/
char *multiply(char *num1, char *num2)
{
int len1 = 0, len2 = 0, i, j;
int *result;
char *final_result;

while (num1[len1])
len1++;
while (num2[len2])
len2++;

result = calloc(len1 + len2, sizeof(int));
if (result == NULL)
exit(98);

for (i = len1 - 1; i >= 0; i--)
{
for (j = len2 - 1; j >= 0; j--)
{
int mul = (num1[i] - '0') * (num2[j] - '0');
int sum = mul + result[i + j + 1];

result[i + j + 1] = sum % 10;
result[i + j] += sum / 10;
}
}

final_result = convert_result_to_string(result, len1, len2);
free(result);

return (final_result);
}

/**
* is_digit - Checks if a string is composed of only digits.
* @str: The string to check.
* Return: 1 if the string is composed of only digits, 0 otherwise.
*/
int is_digit(char *str)
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
* print_error - Prints "Error" and exits with status 98.
*/
void print_error(void)
{
char error[] = "Error\n";
int i;

for (i = 0; error[i]; i++)
_putchar(error[i]);
exit(98);
}

/**
* convert_result_to_string - Converts the result array to a string.
* @result: The array containing the multiplication result.
* @len1: The length of the first number.
* @len2: The length of the second number.
* Return: The result string.
*/
char *convert_result_to_string(int *result, int len1, int len2)
{
char *final_result;
int i = 0, j = 0;

final_result = malloc(len1 + len2 + 1);
if (final_result == NULL)
exit(98);

while (i < len1 + len2 && result[i] == 0)
i++;

while (i < len1 + len2)
final_result[j++] = result[i++] + '0';

final_result[j] = '\0';

if (j == 0)
final_result[j++] = '0', final_result[j] = '\0';

return (final_result);
}

/**
* main - Multiplies two positive numbers.
* @argc: The number of arguments.
* @argv: The arguments.
* Return: 0 on success, 98 on error.
*/
int main(int argc, char *argv[])
{
char *num1, *num2, *result;
int i;

if (argc != 3)
print_error();

num1 = argv[1];
num2 = argv[2];

if (!is_digit(num1) || !is_digit(num2))
print_error();

result = multiply(num1, num2);

for (i = 0; result[i]; i++)
_putchar(result[i]);

_putchar('\n');
free(result);

return (0);
}
