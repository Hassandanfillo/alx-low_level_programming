#include "main.h"

/**
 * _islower - checks for lower case characters
 *
 * @c: checks input.
 *
 * Return: returns 1 if 'c' is lower case otherwise always 0 (success)
**/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
