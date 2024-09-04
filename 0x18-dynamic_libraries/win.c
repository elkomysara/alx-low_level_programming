#include <stdio.h>
#include <stdlib.h>

int rand(void)
{
static int counter = 0;
counter++;
if (counter == 1) return 9;   
if (counter == 2) return 8;  
if (counter == 3) return 10;  
if (counter == 4) return 24;  
if (counter == 5) return 75;  
if (counter == 6) return 9;   
return 0;  
}
