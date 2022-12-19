#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints lowercase alphabet and a newline
 * Description: 'Function to print lower case alphabet''
 * Return: Always (success)
 */

void print_alphabet(void)
{
	char x = 'a'

	for (x = 'a'; x <= 'z'; x++)
		_putchar(x);
	_putchar('\n');

	return (0);
}
