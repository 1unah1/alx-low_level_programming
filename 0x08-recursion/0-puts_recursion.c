#include "main.h"

/**
 * _puts_recursion - To print a string followed by a newline
 * @s: parameter pointer to the string.
 *
 * Return: 0.
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar (*s);
		_putchar(*s + 1);
	}
	else
		_putchar('\n');
}
