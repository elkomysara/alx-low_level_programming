#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @x: the character to be checked
 * Return: 1 if x is a letter, 0 otherwise
 */
int _isalpha(int x)
{
return ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'));
}
