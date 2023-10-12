#include "main.h"
/**
 * _isalpha - Function prints 1 if charac is an alpha,
 * and 0 if not
 *
 * @c: character to be checked.
 *
 * Return: 0 ( Success).
 */
int _isalpha(int c)
{
	char x;

	if  ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))
	{
		return (1);

	}
	else
		return (0);
}
