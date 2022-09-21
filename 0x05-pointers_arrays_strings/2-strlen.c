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

	if (*s != '\0')
	{
		return (1 + _strlen(s + 1));

	}
		return (0);
}
