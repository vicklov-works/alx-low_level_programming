#include "main.h"
#include <string.h>

/**
 * _puts - function to print a string
 * @str: string to be printed
 *
 * Return: 0
 */

void _puts(char *str)
{
	if (*str == 0)
	{
		_putchar('\n');
		return;
	}

	_putchar(*str);
	_puts(str + 1);
}
