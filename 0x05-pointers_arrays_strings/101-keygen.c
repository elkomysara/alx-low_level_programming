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
/* Initialize random number generator */
srand(time(NULL));

/* Define the valid password length and character set */
int password_length = 10; /* Example length */
char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
int charset_size = sizeof(charset) - 1;

/* Generate the password */
char password[password_length + 1];
for (int i = 0; i < password_length; i++) {
password[i] = charset[rand() % charset_size];
}
password[password_length] = '\0'; /* Null-terminate the string */

/* Print the generated password */
printf("%s\n", password);

return (0);
}
