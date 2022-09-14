#include <stdio.h>

/**
 * print_alphabet_x10 - function that holds alphabet printing 10 times arg
 *
 */

void print_alphabet_x10(void)
{
	char alphab;

	for (alphab = 'a' ; alphab <= 'z' ; alphab++)
		putchar(alphab * 10);

	putchar('\n');
}
