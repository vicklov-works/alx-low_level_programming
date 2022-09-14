#include <stdio.h>

/**
 * print_alphabet- a function that holds the alphabet arguments
 *
 */

void print_alphabet(void)
{
	char alphab;

	for (alphab = 'a' ; alphab <= 'z' ; alphab++)
		putchar(alphab);

	putchar('\n');
}
