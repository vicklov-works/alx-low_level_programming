#include "main.h"
#include <stdio.h>

/**
* string_toupper - function that changes lowercase to uppercase
* @a: String
*
* Return: uppercase
*/

char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 97 && a[i] <= 122)
		{
			a[i] -= 32;
		}
	}

	return (a);
}
