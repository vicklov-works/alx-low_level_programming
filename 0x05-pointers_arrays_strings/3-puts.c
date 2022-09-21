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
	while (*str)
	{
		putchar(*str);
		str++;
	}
}
