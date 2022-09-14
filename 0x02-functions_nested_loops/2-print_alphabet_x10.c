#include <stdio.h>

/**
 * print_alphabet_x10 - function that holds alphabet printing 10 times arg
 *
 */

void print_alphabet_x10(void)
{
	int i;
	char alphab;

	for (i = 1; i <= 10; i++)
	{
		for (alphab = 'a'; alphab <= 'z'; alphab++)
			putchar(alphab);
	}
	putcbar('\n');
}
