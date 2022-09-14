#include <stdio.h>
#include "main.h"

/**
 * main- prints out alphabets in lowercase through function
 * Return: always 0 for success
 */

int main(void)
{
	print_alphabet();
	return (0);
}

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
