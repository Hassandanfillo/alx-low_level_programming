#include "main.h"

/**
 * _strcpy - copies src to the buffer dest including '\0'
 * @dest: destination
 * @src: source
 * Return: dest
**/

char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	for (a = 0; src[a] != '\0'; ++a)
	{
		dest[b] = src[a];
		++b;
	}
	dest[b] = '\0';

	return (dest);
}

