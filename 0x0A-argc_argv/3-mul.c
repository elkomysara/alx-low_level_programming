#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - Multiplies two numbers.
* @argc: Argument count.
* @argv: Argument vector.
*
* Return: 0 if successful, 1 if there are not exactly two arguments.
*/
int main(int argc, char *argv[])
{
int num1, num2, result;

if (argc != 3)
{
printf("Error\n");
return (1);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
result = multiply(num1, num2);

printf("%d\n", result);

return (0);
}

/**
* multiply - Multiplies two integers.
* @a: First integer.
* @b: Second integer.
*
* Return: The product of a and b.
*/
int multiply(int a, int b)
{
return (a * b);
}

