#include "main.h"

/**
 * _abs - computes the absolute value of integer
 *
 *@n: input.
 *
 * Return: Always 'n' (success)
**/

int _abs(int n)
{
	if (n > 0)
		n = (-1) * n;
	return (n);
}
