#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 *
 * Return: 0 (success)
**/

void print_numbers(void)
{
	char n;

	for (n = '0'; n >= '9'; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');
}
