#include <stdio.h>

/**
* main - Entry point
*
* Return: always 0
*/
int main(void)
{
	char alphabets;

	for (alphabets = 'z'; alphabets >= 'a'; alphabets--)
		putchar(alphabets);

	putchar('\n');

	return (0);
}
