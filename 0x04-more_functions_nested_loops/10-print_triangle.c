#include "main.h"

/**
* print_triangle - function that prints a triangle
* @size: Size of the triangle
*
* Return: void
*/

void print_triangle(int size)
{
	int a;
	int b;
	int c;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = size - a; b > 1; b--)
				_putchar(32);

			for (c = 0; c <= a; c++)
				_putchar(35);

			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
