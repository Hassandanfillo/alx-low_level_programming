#include "main.h"

/**
 *  print_to_98 - prints natural numbers
 *
 * @n: input
 *  Return: Always 0 (success)
**/

void print_to_98(int n)
{

	for (n = 0; n <= 98; n++)
	{
		if (n < 72)
			printf(",");
		printf(" ");
	}
}
