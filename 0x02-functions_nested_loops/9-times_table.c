#include "main.h"

/**
 * times_table - prints 9 times table
 *
 * Return: Always 0 (success)
**/

void times_table(void)
{
	int i;
	int z;
	int y;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (y = 1; y <= 9; y++)
		{
			_putchar(',');
			_putchar(' ');

			z = i * y;
			if (z <= 9)
				_putchar(' ');
			else
				_putchar((z / 10) + '0');
			_putchar((z % 10) + '0');
		}
		_putchar('\n');
	}
}
