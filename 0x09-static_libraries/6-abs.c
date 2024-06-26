#include <stdio.h>
/**
 * _abs - computes the absolute value of an integer
 * @x: the int to check
 * return: the absolute value of int
 * Return: Always 0 (Success)
*/
int _abs(int x)
{
if (x <= 0)
{
x = -x;
}
return (x);
}
