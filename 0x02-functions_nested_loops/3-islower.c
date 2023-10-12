#include "main.h"
/**
 * _islower - Function prints 1 if c is lowercase
 * and 0 if not.
 *
 * @c: character to be checked.
 *
 * Return: 0 ( Success).
 */
int _islower(int c)
{
	char x;

	if  (x >= 'a' && x <= 'z')
	{
		return (1);

	}
	else
		return (0);
}
