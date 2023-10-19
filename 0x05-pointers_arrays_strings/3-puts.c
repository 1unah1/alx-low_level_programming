#include "main.h"

/**
 * _puts - Function to output a string
 * @s: string to be printed to stdout.
 *
 * Return: Always 0.
 */
int _puts(char *s)
{
	char stl[];
	s = &stl;
	*s = stl;

	_putchar(*s);
	_putchar('\n');
}
