#include "main.h"
#include <stdio.h>

/**
* print_array - function that prints an array
* @a: array to be printed
* @n: number of elements to print
*
* Return: void
*/

void print_array(int *a, int n)
{
	int i;
	int num;

	num = n - 1;

	for (i = 0; i <= num; i++)
	{
		printf("%d", a[i]);

		if (i < num)
			printf(", ");
	}

	printf("\n");
}
