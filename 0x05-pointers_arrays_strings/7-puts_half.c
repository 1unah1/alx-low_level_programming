#include "main.h"

/**
 * puts_half - Function to print half the length of a string.
 * @str: Argument passed to function
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int slen = 0;
	int n;

	for (n = 0; s[n] != '\0'; n++)
		slen++;

	n = slen;

	while (n > (slen - 1) / 2 && n != '\0')
		n++;

	if (n % 2 != 0)
		_putchar(n);

	_putchar('\n');
}
