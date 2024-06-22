#include "main.h"

/**
* factorial - Returns the factorial of a given number.
* @n: The number to compute the factorial of.
*
* Return: The factorial of n.
*/
int factorial(int n)
{
if (n < 0)
return (-1);  /* Error case for negative numbers */
if (n == 0)
return (1);   /* Base case: factorial of 0 is 1 */
return (n * factorial(n - 1));  /* Recursive case */
}
