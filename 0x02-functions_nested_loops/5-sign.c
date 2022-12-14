#include "main.h"

/**
 * print_sign - prints the sign of a number
 *@n: input
 *
 * Return: returns -1 if n less than 0, 1 if n is greater than 0,
 * otherwise always 0 (success)
**/

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	else
	{
		_putchar('+');
		return (1);
	}
}

