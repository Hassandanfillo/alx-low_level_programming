#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: input
 *
 * Return: value of the last digit (success)
**/

int print_last_digit(int n)
{
	int last_digit;


	if (n < 0)
		last_digit = 1 * (n % 10);
	else
		last_digit = n % 10;
	return (last_digit);
}
