#include "main.h"
#include <stdio.h>

/**
* leet - function that encodes a string into 1337
* @s: string to be encoded
*
* Return: encoded string
*/

char *leet(char *s)
{
	int i;
	int j;
	char lett[] = "AEOTL";
	char cod[] = {52, 51, 48, 55, 49};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; lett[j] != '\0'; j++)
		{
			if (s[i] == lett[j] || s[i] == (lett[j] + 32))
			{
				s[i] = cod[j];
			}
		}
	}

	return (s);
}
