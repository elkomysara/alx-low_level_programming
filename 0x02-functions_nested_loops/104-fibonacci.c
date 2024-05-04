

#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 * followed by a new line
 * Return: ALways 0 (Success)
 */
int main(void)
{
	unsigned long int i, j, k;

	j = 1;
	k = 2;

	printf("%lu", j);

	for (i = 1; i < 99; i++)
	{
		printf(", %lu", k);
		k = k + j;
		j = k - j;
	}

	printf("\n");

	return (0);
}
