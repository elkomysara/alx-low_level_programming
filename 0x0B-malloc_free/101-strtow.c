#include <stdlib.h>
#include "main.h"

/**
* count_words - Counts the number of words in a string.
* @str: The string to count words in.
*
* Return: The number of words in the string.
*/
int count_words(char *str)
{
int count = 0, in_word = 0;

while (*str)
{
if (*str == ' ')
in_word = 0;
else if (in_word == 0)
{
in_word = 1;
count++;
}
str++;
}

return (count);
}

/**
* word_length - Finds the length of the next word in a string.
* @str: The string to search.
*
* Return: The length of the next word.
*/
int word_length(char *str)
{
int length = 0;

while (str[length] && str[length] != ' ')
length++;

return (length);
}

/**
* allocate_word - Allocates memory for a word and copies it.
* @str: The string containing the word.
* @word_len: The length of the word.
*
* Return: A pointer to the allocated word, or NULL if it fails.
*/
char *allocate_word(char *str, int word_len)
{
char *word = malloc((word_len + 1) * sizeof(char));
int k;

if (word == NULL)
return (NULL);

for (k = 0; k < word_len; k++)
word[k] = str[k];
word[k] = '\0';

return (word);
}

/**
* free_words - Frees an array of words.
* @words: The array of words to free.
* @count: The number of words in the array.
*/
void free_words(char **words, int count)
{
int j;

for (j = 0; j < count; j++)
free(words[j]);
free(words);
}

/**
* strtow - Splits a string into words.
* @str: The string to split.
*
* Return: A pointer to an array of strings (words), or NULL if it fails.
*/
char **strtow(char *str)
{
char **words;
int i = 0, num_words, word_len;

if (str == NULL || *str == '\0')
return (NULL);

num_words = count_words(str);
if (num_words == 0)
return (NULL);

words = malloc((num_words + 1) * sizeof(char *));
if (words == NULL)
return (NULL);

while (*str)
{
if (*str == ' ')
{
str++;
continue;
}

word_len = word_length(str);
words[i] = allocate_word(str, word_len);
if (words[i] == NULL)
{
free_words(words, i);
return (NULL);
}

str += word_len;
i++;
}
words[i] = NULL;

return (words);
}
