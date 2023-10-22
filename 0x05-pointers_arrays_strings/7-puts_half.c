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

	for (n = 0; str[n] != '\0'; n++)
		slen++;

	n = slen / 2;

	while (str[n] != '\0')
	{
		if (slen % 2 != 0)
			_putchar(str[n]);

		n++;
	}

	_putchar('\n');
}
