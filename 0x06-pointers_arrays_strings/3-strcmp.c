#include "main.h"
#include <stdio.h>

/**
* _strcmp - Compares two strings
* @s1: string one
* @s2: string two
*
* Return: value after subtraction
*/

int _strcmp(char *s1, char *s2)
{
	int i;
	int sub = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
		{
			continue;
		}
		else
		{
			if (s2[i] != '\0')
			{
				diff = s1[i] - s2[i];
				break;
			}
		}
	}

	return (sub);
}
