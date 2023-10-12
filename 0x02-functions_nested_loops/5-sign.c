#include "main.h"
/**
 * print_sign - Function prints the sign of an integer.
 * 1 = +, 0 = 0, and -1 = -.
 *
 * @n: integer to be checked.
 *
 * Return: 0 ( Success).
 */
int print_sign (int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1;
	}
	else if (n < 0)
	{
		_putchar('-');
		return (0);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
