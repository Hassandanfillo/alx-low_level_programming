#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
**/

void print_alphabet_x10(void)
{
	int lines;
	int cha;

	while (lines <= 10)
	{
		for (cha = 'a'; cha <= 'z'; cha++)
		{
			putchar(cha);
		}
		putchar('\n');
		lines++;
	}
}
