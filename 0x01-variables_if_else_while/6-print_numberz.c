#include <stdio.h>

/**
 * main - starting point
 *
 * Return: Always 0 (success)
**/

int main(void)
{
	int x;

	for (x = 0; x <= 9; ++x)
	{
		putchar(x + '0');
	}
	putchar('\n');
	return (0);
}
