#include <stdio.h>
#include "main.h"

/**
 * _islower - Function checks for a lowercase impute
 * Description: 'prints 1 for lowercase and 0 otherwise'
 * Return: Always 0 (success)
 */

int _islower(int c)
{
	if(c >= 'a' && c <= 'z' || c >= 97 && c <= 122)
		_putchar('1');
	else
		_putchar('0');
	return (0);
}
