#include "main.h"

/**
 * print_rev - Function which prints a string in reverse
 * @s: string to be printed in reverse
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int c, n;

	c = 0;

	for (n = 0; s[n] != '\0'; n++)
		c++;

	for (n = c - 1; n >= 0; n--)
		_putchar(s[n]);

	_putchar('\n');
}
