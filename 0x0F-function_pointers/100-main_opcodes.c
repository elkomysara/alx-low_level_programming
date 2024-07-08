#include <stdio.h>
#include <stdlib.h>

/**
* main - prints its own opcodes
* @argc: number of arguments
* @argv: array of arguments
*
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
int bytes, i;
unsigned char *main_ptr;

if (argc != 2)
{
printf("Error\n");
exit(1);
}

bytes = atoi(argv[1]);

if (bytes < 0)
{
printf("Error\n");
exit(2);
}

main_ptr = (unsigned char *)main;

for (i = 0; i < bytes; i++)
{
printf("%02x", main_ptr[i]);
if (i < bytes - 1)
printf(" ");
}

printf("\n");

return (0);
}
