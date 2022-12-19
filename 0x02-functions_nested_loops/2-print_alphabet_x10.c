#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabet and a newline
 * Description: 'prints 10x lowercase alphabet''
 * Return: Always (success)
 */

void print_alphabet_x10(void)
{
	char x;
	int i = 0;

	while (i < 10)
	{
	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
	i++;
	return (0);
}
