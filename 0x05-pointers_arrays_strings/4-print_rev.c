#include "main.h"

/**
 * print_rev - function that prints in reverse
 * @s: string to be printed
 *
 * Return: 0
 */

void print_rev(char *s)
{
	int c = 0;

	while (*(s + c))
		c++;
	c = c - 1;
	while (c >= 0)
	{
		_putchar(*(s + c));
		c--;
	}
	_putchar('\n');
}
