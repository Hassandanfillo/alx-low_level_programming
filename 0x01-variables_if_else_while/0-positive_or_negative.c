#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - entry point
 *
 * Return: Always zero (success)
**/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/**my code**/
	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	else(n < 0);
	{
		printf("%i is negative\n", n);
	}
	return (0);
}
