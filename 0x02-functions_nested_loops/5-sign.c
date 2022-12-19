#include <stdio.h>
#include "main.h"

/**
 * print_sign - determine if an impute is <0, >0 and ==0
 * Description: 'prints -, + or 0 respectively
 * Return: Always 0 (success)
 */
int print_sign(int n);
{
	int r;

	if (n > 0)
	{
		_putchar('+');
		r = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		r = 0;
	}
	else if (n < 0)
	{
		_putchar('-');
		r = -1;
	}
	return (r);
}
