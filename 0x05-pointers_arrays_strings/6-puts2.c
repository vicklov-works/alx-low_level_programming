#include "main.h"
#include <stdio.h>

/**
* puts2 - function that prints every other character of a string
* @str: String to ve printed
*
* Return: void
*/

void puts2(char *str)
{
	int c = 0;
	int i = 0;

	while (str[c] != '\0')
		c++;

	while (i < c)
	{
		_putchar(str[i]);
		i += 2;
	}

	_putchar('\n');
}
