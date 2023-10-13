#include "main.h"

/**
 * print_numbers - Prints digit 0 to 9 and a newline.
 *
 * Return: 1 or 0 ( an int)
 */
void print_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		_putchar(x + '0');
	}

	_putchar('\n');
}
