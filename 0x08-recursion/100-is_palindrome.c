#include "main.h"

/**
* _strlen - returns the length of a string
* @s: the string to measure
*
* Return: the length of the string
*/
int _strlen(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen(s + 1));
}

/**
* check_palindrome - recursively checks if a string is a palindrome
* @s: the string to check
* @start: the starting index
* @end: the ending index
*
* Return: 1 if the string is a palindrome, otherwise 0
*/
int check_palindrome(char *s, int start, int end)
{
if (start >= end)
return (1);
if (s[start] != s[end])
return (0);
return (check_palindrome(s, start + 1, end - 1));
}

/**
* is_palindrome - checks if a string is a palindrome
* @s: the string to check
*
* Return: 1 if the string is a palindrome, otherwise 0
*/
int is_palindrome(char *s)
{
int len = _strlen(s);
if (len == 0)
return (1);
return (check_palindrome(s, 0, len - 1));
}
