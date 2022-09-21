#include "main.h"
#include <string.h>

/**
 * rev_string - function that reverse a string
 * @s: character to be reversed
 * return: 0
 */

void rev_string(char *s)
{
	//if (*s != '\0')
	{
		//rev_string(s + 1);
		//_putchar(*s);
	}
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
