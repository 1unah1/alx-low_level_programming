#include "main.h"
/**
 * print_alphabet_x10 - Function prints a-z 10 time.
 *
 * Return: 0 ( Success).
 */
void print_alphabet_x10(void)
{
	char x;
	int d;

	for (d = '0'; d <= '9'; d++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}

		_putchar('\n');

	}

	return (0);
}
