#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Function searches the last digit of an impute
 * Description: 'prints the last digit of a number'
 * Return: Always 0 (success)
 */
int print_last_digit(int n)
{
	while (n == 98)
	{
		if ( n < 0)
			printf("%d, ", n);
		n++;
		else if (n >= 98)
			printf("%d ", n);
		n--;
	}

	return (0);
}
