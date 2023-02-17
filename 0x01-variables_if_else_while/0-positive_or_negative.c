#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/*
 * Assign random value to variable n
 * determine weather it is negative or positive
 */
int main(void)
{
	int n;
	srand(time(0));

	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	return (0);
}
