#include "main.h"

/**
 * _isdigit - checks int from 0-9 If yes, 1; else 0.
 *
 *@c: int to be entered and checked for integer.
 *
 * Return: 1 or 0 (an int)
 */
int _isdigit(int c)
{
	int c;

	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
