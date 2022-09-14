
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
		putchar(" + ");
		return (1);
	}
	else if (n == 0)
	{
		putchar(" 0 ");
		return (0);
	}
	else
	{
		putchar(" - ");
		return (-1);
	}
}
