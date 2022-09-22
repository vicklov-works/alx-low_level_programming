#include "main.h"
#include <stdio.h>

/**
 * _strncat - functions that concatenate two strings
 * @dest: destination
 * @src: source
 * @n: byte of string
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int totald = 0;
	int totals = 0;
	int a = 0, b = 0, i = 0;
	char allst[20000];

	while (dest[totald] != '\0')
	{
		allst[a] = dest[totald];
		totald++;
		a++;
	}

	while (totals < n)
	{
		allst[a] = src[totals];
		totals++;
		a++;
	}

	while (allst[b] != '\0')
	{
		dest[i] = allst[b];
		i++;
		b++;
	}

	return (dest);
}
