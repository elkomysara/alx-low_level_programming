#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - generates a keygen
*
* Return: The integer value of the converted string
*/


int main(void)
{
int password_length; /* Example length */
char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
int charset_size = sizeof(charset) - 1;
char password[11]; /* password_length + 1 for null terminator */
int i;

srand(time(NULL)); /* Initialize random number generator */
password_length = 10; /* Assign the password length */

/* Generate the password */
for (i = 0; i < password_length; i++)
{
password[i] = charset[rand() % charset_size];
}
password[password_length] = '\0'; /* Null-terminate the string */

/* Print the generated password */
printf("%s\n", password);

return (0);
}
