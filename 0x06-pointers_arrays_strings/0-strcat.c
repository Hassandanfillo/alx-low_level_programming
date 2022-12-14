#include "main.h"

/**
 * _strcat - concatates two strings
 * @src: input
 * @dest: input
 * Return: dest
**/

char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
