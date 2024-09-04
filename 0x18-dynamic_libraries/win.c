#include <stdio.h>
#include <stdlib.h>

int rand(void)
{
    static int i = -1;
    i++;
    if (i == 0) return 9;
    if (i == 1) return 8;
    if (i == 2) return 10;
    if (i == 3) return 24;
    if (i == 4) return 75;
    if (i == 5) return 9;
    return rand();  // Default behavior for any other calls
}
