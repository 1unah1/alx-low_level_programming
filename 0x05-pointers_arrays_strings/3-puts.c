#include "main.h"

/**
 * _puts - Function to output a string
 * @s: string to be printed to stdout.
 * Return: Always 0.
 */
void _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
