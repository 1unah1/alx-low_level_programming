#include "main.h"

/**
 * more_numbers - Prints 0 - 14 X10 and a newline.
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int n;
	int x;

	for (x = 0; x < 10; x++)
	{
		n = 0;

		while (n < 15)
		{
			if (n >= 10)
				_putchar((n / 10) + '0');
			-putchar((n % 10) + '0');

			n++;
		}

		_putchar('\n');
	}
}
