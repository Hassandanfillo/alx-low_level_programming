#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: input
 * @src: destination
 * @n: length of the string
 * Return: destination
**/

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
