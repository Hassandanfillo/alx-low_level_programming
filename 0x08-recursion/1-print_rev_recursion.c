#include "main.h"
/**
 * _print_rev_recursion - prints reverse strings
 * @s: input
 * Return: 0
**/

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
