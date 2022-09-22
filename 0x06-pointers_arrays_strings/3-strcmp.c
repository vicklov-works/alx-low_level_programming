#include "main.h"
#include <stdio.h>

/**
* _strcmp - function that compares two strings
* @s1: firstbstring
* @s2: second string
*
* Return: Differences
*/

int _strcmp(char *s1, char *s2)
{
	int a;
	int differ = 0;

	for (a = 0; s1[a] != '\0'; a++)
	{
		if (s1[a] == s2[a])
		{
			continue;
		}
		else
		{
			if (s2[a] != '\0')
			{
				differ = s1[a] - s2[a];
				break;
			}
		}
	}

	return (differ);
}
