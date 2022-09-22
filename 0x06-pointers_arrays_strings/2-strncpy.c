#include "main.h"
#include <stdio.h>

/**
 * _strncpy - function that copies a string
 * @dest: destination
 * @src: source
 * @n: maximum byte
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (src[a] != '\0')
		a++;

	while (b < n)
	{
		if (b < a)
			dest[b] = src[b];
		else
			dest[b] = '\0';
		b++;
	}

	return (dest);
}
