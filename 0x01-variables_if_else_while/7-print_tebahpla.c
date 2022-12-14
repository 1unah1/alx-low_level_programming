#include <stdio.h>

/**
 * main - Entry point
 * Description: 'prints lower case alphabet followed by a newline'
 * Return: Always 0 (success)
 */

int main
{
	int alph = 'z';

	while (alph >= 'a')
	{
		putchar(alph);
		alph--;
	}

	putchar('\n');
	return (0);
}
