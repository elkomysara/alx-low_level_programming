#include <stdlib.h>
#include <time.h>

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	// Get the last digit of the number
	int last_digit = n % 10;

	// Print the last digit of the number and the appropriate message depending on the last digit of the number
	printf("Last digit of %d is %d ", n, last_digit);
	if (last_digit > 5) {
		printf("and is greater than 5\n");
	} else if (last_digit == 0) {
		printf("and is 0\n");
	} else {
		printf("and is less than 6 and not 0\n");
	}

	return (0);
}
