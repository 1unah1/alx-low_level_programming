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
	if  (c >= 'a' && c <= 'z')
	{
		return (1);

	}
	else
		return (0);
}
