#include "main.h"

/**
 * puts_half - prints half of string
 *
 * @str: input
 * Return: void
**/

void puts_half(char *str)
{
	int l;
	int j;

	for (l = 0; str[l] != '\0'; ++l)
		;
	if (l % 2 == 0)
	{
		for (j = l / 2; str[j] != '\0'; ++j)
			_putchar(str[j]);
	}
	else
	{
		for (j = ((l - 1) / 2) + 1; str[j] != '\0'; ++j)
		       _putchar(str[j]);
	}
	_putchar('\n');
}
