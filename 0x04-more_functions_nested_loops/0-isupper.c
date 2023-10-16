#include "main.h"

/**
 * _isupper - Returns 1 if 'c' CAPS and 0 if not.
 *
 * @c: variable holding the char to be check.
 *
 * Return: 1 or 0 (an int)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
