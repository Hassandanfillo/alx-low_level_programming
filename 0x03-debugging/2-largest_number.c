#include "main.h"

/**
 * largest_number - returns larges of three numbers
 * @a: first
 * @b: second
 * @c: third
 *
 * Return: largest num
**/

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;

	}
	return (largest);
}
