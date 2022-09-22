#include "main.h"
#include <stdio.h>

/**
 * _strcat - function that concantenates two strings
 * @dest: the destination
 * @src: yhe source
 * Return: destination
 */

char *_strcat(char *dest, char *src)
{
	int totalsd = 0;
	int totalss = 0;
	int a = 0, b = 0, i = 0;
	char allst[200000];

	while (dest[totalsd] != '\0')
	{
		allst[a] = dest[totalsd];
		totalsd++;
		a++;
	}

	while (src[totalss] != '\0')
	{
		allst[a] = src[totalss];
		totalss++;
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
