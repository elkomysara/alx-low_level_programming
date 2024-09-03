#include <stdio.h>
#include <string.h>

/**
* main - Generates a key for crackme5
* @argc: The number of arguments
* @argv: The argument vector
* 
* Return: Always 0
*/
int main(int argc, char *argv[])
{
if (argc != 2)
{
printf("Usage: %s <username>\n", argv[0]);
return 1;
}

char *username = argv[1];
int len = strlen(username);
int sum = 0;

for (int i = 0; i < len; i++)
{
sum += username[i];
}

printf("%d\n", sum);
return 0;
}
