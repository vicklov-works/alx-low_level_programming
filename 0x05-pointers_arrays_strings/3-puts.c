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
		putchar('\n');
		return;
	}
	_putchar(*s);
	_puts(s + 1);
}
