#include "main.h"

/**
* reverse_array - Reverses the content of an array of integers
* @a: Pointer to the array of integers
* @n: The number of elements in the array
*/

void reverse_array(int *a, int n)
{
int left = 0;
int right = n - 1;

/* Loop until left and right pointers meet or cross */
while (left < right)
{
/* Swap elements at left and right indices */
int temp = a[left];
a[left] = a[right];
a[right] = temp;

/* Move pointers towards the middle */

left++;
right--;
}
}
