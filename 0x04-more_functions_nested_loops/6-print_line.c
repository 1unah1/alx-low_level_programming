#include "main.h"

/**
 * print_line - Prints line times the value of n
 *
 * @n: The value to be passed.
 *
 * Return: Always 0.
 */
void print_line(int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (n <= 0)
		{
			break;
		}
		_putchar('_');
	}
	_putchar('\n');
}
