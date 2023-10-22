#include "main.h"

/**
 * puts2 - Function to printv every +2 charactwlervof a string.
 * @str: string to compute.
 * Return: 0 Success
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i];
		i += 2;
	}

	_putchar('\n');
}
