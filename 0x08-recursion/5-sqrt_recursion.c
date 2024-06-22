#include "main.h"

int _sqrt_helper(int n, int guess);

/**
* _sqrt_recursion - returns the natural square root of a number
* @n: the number to find the square root of
*
* Return: the natural square root of n
*         if n does not have a natural square root, return -1
*/
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (_sqrt_helper(n, 0));
}

/**
* _sqrt_helper - helper function to find the square root
* @n: the number to find the square root of
* @guess: the current guess for the square root
*
* Return: the natural square root of n
*         if n does not have a natural square root, return -1
*/
int _sqrt_helper(int n, int guess)
{
if (guess * guess == n)
{
return (guess);
}
if (guess * guess > n)
{
return (-1);
}
return (_sqrt_helper(n, guess + 1));
}

