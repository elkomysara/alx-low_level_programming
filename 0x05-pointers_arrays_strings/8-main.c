#include <stdio.h>

/**
 * modif_my_char_var - modifies a char variable through a pointer
 *
 * Return: nothing.
 */
void modif_my_char_var(char *cc, char ccc)
{
    printf("Inside modif_my_char_var - Address of 'cc': %p\n", (void*)&cc);
    printf("Inside modif_my_char_var - Value of 'cc': %p\n", (void*)cc);
    printf("Inside modif_my_char_var - Address of 'ccc': %p\n", (void*)&ccc);
    printf("Inside modif_my_char_var - Value of 'ccc': %c\n", ccc);

    *cc = 'o';
    ccc = 'l';

    printf("Inside modif_my_char_var - After modification - Value of '*cc': %c\n", *cc);
    printf("Inside modif_my_char_var - After modification - Value of 'ccc': %c\n", ccc);
}

/**
 * main - testing the modification of char variables
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;
    char *p;

    p = &c;
    c = 'H';

    printf("Before modif_my_char_var - Value of 'c': %c\n", c);
    printf("Before modif_my_char_var - Address of 'c': %p\n", (void*)&c);
    printf("Before modif_my_char_var - Value of 'p': %p\n", (void*)p);
    printf("Before modif_my_char_var - Address of 'p': %p\n", (void*)&p);

    modif_my_char_var(p, c);

    printf("After modif_my_char_var - Value of 'c': %c\n", c);
    printf("After modif_my_char_var - Address of 'c': %p\n", (void*)&c);
    printf("After modif_my_char_var - Value of 'p': %p\n", (void*)p);
    printf("After modif_my_char_var - Address of 'p': %p\n", (void*)&p);

    return (0);
}
