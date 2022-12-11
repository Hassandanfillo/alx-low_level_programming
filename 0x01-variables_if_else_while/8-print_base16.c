#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (success)
**/

int main(void)
{
	int no = 48;

	while (no <= 102)
	{
		putchar(no);

		if (no == 57)
			no += 39;
		++no;
	}
	putchar('\n');
	return (0);
}
