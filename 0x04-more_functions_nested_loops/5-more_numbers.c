#include "main.h"

/**
 * more_numbers - prints ten times from 0 to 14
 *
 * Return: 0 (success)
**/

void more_numbers(void)
{
	int lines;
	int x;

	for (lines = 0; lines <= 9; lines++)
	{
		for (x = 0; x <= 14; x++)
			if (x >= 10)
				putchar('1');
		putchar(x % 10 + '0');
	}
	putchar('\n');
}
