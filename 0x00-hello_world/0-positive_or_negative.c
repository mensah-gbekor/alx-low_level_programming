#include <stdlib.h>
#include <time.h>
#include <studio.h>
/**
 * program to determing positive, zero or negative
 *
 *
 */
int main(void)
{ 
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
		printf("%d is negative\n", n);
	else if (n > 0)
		printf("%d is positive\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}

