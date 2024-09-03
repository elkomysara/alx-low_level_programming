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
char *username;
int len;
int sum = 0;
int i;

if (argc != 2)
{
printf("Usage: %s <username>\n", argv[0]);
return 1;
}

username = argv[1];
len = strlen(username);

for (i = 0; i < len; i++)
{
sum += username[i];
}

printf("%d\n", sum);
return 0;
}
