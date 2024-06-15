#include "main.h"

/**
 * is_separator - Checks if a character is a word separator
 * @c: The character to be checked
 *
 * Return: 1 if the character is a separator, 0 otherwise
 */
 
int is_separator(char c)
{
    char separators[] = " \t\n,;.!?\"(){}";
    int i;

    for (i = 0; separators[i] != '\0'; i++)
    {
        if (c == separators[i])
        {
            return 1;
        }
    }
    return 0;
}

/**
 * cap_string - Capitalizes all words of a string
 * @str: The string to be capitalized
 *
 * Return: A pointer to the capitalized string
 */
char *cap_string(char *str)
{
    int i = 0;

    /* Capitalize the first character if it's a letter */
    if (str[i] >= 'a' && str[i] <= 'z')
    {
        str[i] -= 'a' - 'A';
    }

    /* Traverse the string */
    for (i = 1; str[i] != '\0'; i++)
    {
        /* If the current character is a letter and the previous one is a separator, capitalize it */
        if (str[i] >= 'a' && str[i] <=


