#include "main.h"
#include <string.h>

/**
 * _strlen - function to check for the length of a string
 * @s: character for checking
 *
 * Return: 0
 */

int _strlen(char *s)
{
	char s[10000];
	int len;

	for (len = 0; s[len] != '\0'; ++len)
		putchar(len);

	return (0);
}
