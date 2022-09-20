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
	char str[];
	int len;

	for (len = 0; str[len] != '\0'; ++len)
		_putchar(len + '0');

	return (0);
}
