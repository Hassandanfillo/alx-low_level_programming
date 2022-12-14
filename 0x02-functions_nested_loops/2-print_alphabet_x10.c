#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
**/

void print_alphabet_x10(void)
{
	int lines = 0;
	int cha;

	while (lines <= 9)
	{
		for (cha = 'a'; cha <= 'z'; cha++)
		{
			putchar(cha);
		}
		lines++;
		putchar('\n');
	}
}
