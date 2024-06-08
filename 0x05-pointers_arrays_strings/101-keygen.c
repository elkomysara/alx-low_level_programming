#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

int main() {
    char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int charset_size = sizeof(charset) - 1;
    char password[PASSWORD_LENGTH + 1];
    int i;

    srand(time(NULL));

    /* Generate the password */
    for (i = 0; i < PASSWORD_LENGTH; i++) {
        password[i] = charset[rand() % charset_size];
    }
    password[PASSWORD_LENGTH] = '\0'; // Null-terminate the string

    /* Print the generated password */
    printf("%s\n", password);

    return 0;
}
