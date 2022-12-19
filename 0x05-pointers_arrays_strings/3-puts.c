#include "main.h"

/**
 * _puts - prints a string to the stdout
 *
 * @str: input
 * Return: void
**/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		++str;
	}
	_putchar('\n');
}
