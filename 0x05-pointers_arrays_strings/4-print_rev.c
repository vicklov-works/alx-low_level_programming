#include "main.h"

/**
 * print_rev - function that prints in reverse
 * @s: string to be printed
 *
 * Return: 0
 */

void print_rev(char *s)
{
	if (*s != '\0')
	{
		print_rev(s + 1);
		_putchar(*s);
	}
}
