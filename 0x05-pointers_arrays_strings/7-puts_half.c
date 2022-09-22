#include "main.h"
#include <stdio.h>

/**
* puts_half - function that prints half of a string
* @str: string to be printed in half
*
* Return: void
*/

void puts_half(char *str)
{
	int c;
	int tot = 0;
	int half;

	while (str[tot] != '\0')
		tot++;

	c = tot - 1;

	if ((c % 2) == 0)
	{
		half = c / 2;

		for (half += 1; half <= c; half++)
			_putchar(str[half]);
	}
	else
	{
		int half = (c - 1) / 2;

		for (half += 1; half <= c; half++)
			_putchar(str[half]);
	}

	_putchar('\n');
}
