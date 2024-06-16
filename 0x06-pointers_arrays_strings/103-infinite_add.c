
#include "main.h"
#include <string.h>

/**
* infinite_add - Adds two numbers stored as strings.
* @n1: First number string.
* @n2: Second number string.
* @r: Buffer to store the result.
* @size_r: Buffer size.
*
* Return: Pointer to the result, or 0 if it can't be stored in r.
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = strlen(n1);
int len2 = strlen(n2);
int carry = 0, sum = 0;
int i = len1 - 1, j = len2 - 1, k = 0;
int start;
int end;

if (size_r <= 0)
return (0);

while (i >= 0 || j >= 0 || carry)
{
if (k >= size_r - 1)
return (0);
sum = carry;
if (i >= 0)
sum += n1[i--] - '0';
if (j >= 0)
sum += n2[j--] - '0';
carry = sum / 10;
r[k++] = (sum % 10) + '0';
}
r[k] = '\0';

/* Reverse the result string */

for (start = 0, end = k - 1; start < end; start++, end--)
{
char temp = r[start];
r[start] = r[end];
r[end] = temp;
}

return (r);
}

