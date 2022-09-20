#include "main.h"

/**
 * swap_int - function that swap integers
 * @a: first integer to be swapped
 * @b: second integer to be swapped
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int toswap;

	toswap = *a;
	*a = *b;
	*b = toswap;
}
