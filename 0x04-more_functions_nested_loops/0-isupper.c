#include "main.h"

/**
 * _isupper - checks upper case character
 * @c: input
 *
 * Return: return 1 if c is upper case, otherwise 0
**/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
