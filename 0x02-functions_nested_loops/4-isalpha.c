#include <stdio.h>
#include "main.h"

/**
 * _isalpha - Seeks if impute is an alphabet
 * Description: 'prints 1 if true and 0 if false'
 * Return: Always 0 (success)
 */

int _isalpha0(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}

	return (0);
}
