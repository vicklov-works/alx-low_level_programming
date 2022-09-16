
/**
 * print_most_numbers - function to print numbers with exceptions
 *
 * Return: 1 to 9 without 2 and 4
 */

void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num != 2 && num != 4)
			putchar(num + '0');
	}
	putchar('\n');
}
