#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - Adds positive numbers passed as arguments.
* @argc: Argument count.
* @argv: Argument vector.
*
* Return: 0 if successful, 1 if there are invalid arguments.
*/
int main(int argc, char *argv[])
{
int sum;

if (argc < 2)
{
printf("0\n");
return (0);
}

sum = add_positive_numbers(argc, argv);

if (sum == -1)
{
printf("Error\n");
return (1);
}

printf("%d\n", sum);
return (0);
}

/**
* add_positive_numbers - Adds all positive numbers in argv.
* @argc: Argument count.
* @argv: Argument vector.
*
* Return: Sum of positive numbers, or -1 on error.
*/
int add_positive_numbers(int argc, char *argv[])
{
int i, sum = 0;

for (i = 1; i < argc; i++)
{
if (is_positive_number(argv[i]))
{
sum += atoi(argv[i]);
}
else
{
return (-1);
}
}

return (sum);
}

/**
* is_positive_number - Checks if a string is a positive number.
* @s: String to check.
*
* Return: 1 if true, 0 if false.
*/
int is_positive_number(char *s)
{
int i;

if (_strlen(s) == 0)
return (0);

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] < '0' || s[i] > '9')
return (0);
}

return (1);
}

/**
* _strlen - Computes the length of a string.
* @s: String to compute length of.
*
* Return: Length of the string.
*/
int _strlen(char *s)
{
int len = 0;

while (s[len] != '\0')
len++;

return (len);
}
