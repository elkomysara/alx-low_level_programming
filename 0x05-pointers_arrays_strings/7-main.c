#include <stdio.h>

void modif_my_param(int m)
{
    printf("Inside function before modification: m = %d\n", m);
    m = 402;
    printf("Inside function after modification: m = %d\n", m);
}

int main(void)
{
    int n = 98;
    printf("Before function call: n = %d\n", n);
    modif_my_param(n);
    printf("After function call: n = %d\n", n);

    return 0;
}
