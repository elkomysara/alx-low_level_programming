#include <stdio.h>

/**
* main - Prints the name of the program.
* @argc: Argument count.
* @argv: Argument vector.
*
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
(void)argc;  /* Suppress unused parameter warning */
printf("%s\n", argv[0]);
return (0);
}
