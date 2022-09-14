#include <stdio.h>

/**
 * print_sign - function that checks for sign
 * @n: character to be checked
 *
 * Return: 1 for positive, 0 for zero and -1 for negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		printf(" + ");
		return (1);
	}
	else if (n == 0)
	{
		printf(" 0 ");
		return (0);
	}
	else
	{
		printf(" - ");
		return (-1);
	}
}
