
/**
 * _islower - function that checks for lowercase character
 * @c: input that is to be checked
 *
 * Return: 1 if its lowercase, 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 97  && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
