#include <stdio.h>

/**
 * main - starting point
 *
 * Return: Always 0 (success)
**/

int main(void)
{
	int x;

	for (x = 0; x < 90; x++)
	{
		putchar((x / 10) + '0');
		putchar((x % 10) + '0');
		if (x < 89)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
