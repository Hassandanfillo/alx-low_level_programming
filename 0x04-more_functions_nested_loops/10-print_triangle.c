#include "main.h"

/**
 * print_triangle - prints triangle
 * @size: size of the triangle
 *
 * Return: 0
**/

void print_triangle(int size)
{
	int i;
	int h;
	int b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (h = 1; h <= size; h++)
		{
			for (b = size - h; b >= 1; b--)
			{
				_putchar(' ');
			}
			for (i = 1; i <= h; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
