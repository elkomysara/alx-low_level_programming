#include "main.h"

/**
* is_prime_helper - recursively checks if n is divisible by any number
* from 2 to sqrt(n)
* @n: the number to check
* @i: current divisor to check
*
* Return: 1 if n is prime, otherwise 0
*/
int is_prime_helper(int n, int i)
{
if (i * i > n)
return (1);
if (n % i == 0)
return (0);
return (is_prime_helper(n, i + 1));
}

/**
* is_prime_number - checks if a number is a prime number
* @n: the number to check
*
* Return: 1 if n is prime, otherwise 0
*/
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (is_prime_helper(n, 2));
}
