#include "main.h"
#include <string.h>

/**
 * rev_string - function that reverse a string
 * @s: character to be reversed
 * return: 0
 */

void rev_string(char *s)
{
	char rev = s[0];
	int c = 0;
	int i;

	while (s[c] != '\0')
		c++;

	for (i = 0; i < count; i++)
	{
		c--;
		rev = s[i];
		s[i] = s[c];
		s[c] = rev;
	}
}
