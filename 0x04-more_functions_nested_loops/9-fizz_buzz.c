#include <stdio>

/**
 * main - FizzBuzz test
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i == 1)
{
printf('%d', i);
}
else if (i % 3 == 0)
{
printf("Fizz");
}
else if (i % 5 == 0)
{
printf(" Buzz");
}
else if (i % 3 == 0 && i % 5 == 0)
{
printf(" FizzBuzz");
}
}
printf("\n");
}
