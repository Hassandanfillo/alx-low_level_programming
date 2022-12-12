#include <stdio.h>

/**
 * main - starting point
 *
 * Return: Always 0 (success)
**/

int main(void)
{
	int i;
	int j;
	int k;
	int l;

	i = 0;
	while (i < 1000)
	{
		j = i / 100;
		k = (i / 10) % 10;
		l = i % 10;
		if (j < k && k < l)
		{
			putchar(l + '0');
			putchar(k + '0');
			putchar(j + '0');
			if (i < 789)
			{
				putchar(',');
				putchar(' ');
			}
		}
		i++;
	}
	return (0);
}


