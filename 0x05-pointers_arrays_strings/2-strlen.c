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
	int len;

	for (len = 0; *s != '\0'; ++len)
		putchar(len);
	return (0);
}
