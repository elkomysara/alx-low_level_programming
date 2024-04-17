#include "main.h"
/**
* print_sign - Entry point
* @x: parameter
* Return: Always 0 (Success)
*/

int print_sign(int x)
{
if (x > 0)
{
_putchar('+');
return (1);
}
else if (x == 0)
{
_putchar(0 + '0');
return (0);
}
else if (x < 0)
{
_putchar('-');

}
return (-1);
}

