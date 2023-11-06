#include "main.h"

/**
 * _puts_recursion - prints a string followed by a newline.
 * @s: Parameter pointer to the string
 *
 * Return: 0.
 */
void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}

	_putchar('\n');
}

