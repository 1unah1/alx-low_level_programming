#include "main.h"

/**
 * print_most_numbers - Prints digit 0 to 9 except 2 and 4.
 *
 * Return: Alwwys 0.
 */
void print_most_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		if (x == 2 || x == 4)
		{
			x = x + 1;
		}

		_putchar(x + '0');
	}

	_putchar('\n');
}
