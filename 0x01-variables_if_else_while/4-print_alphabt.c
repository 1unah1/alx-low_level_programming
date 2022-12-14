#include <stdio.h>

/**
 * main - Entry point
 * Description: 'This programm seeks to write the alphabet in
 * lower case omitting e and q, and prints a newline'
 * Return: Always 0 (success)
 */

int main(void)
{
	int lower_alph = 'a';

	while (lower_alph <= 'z')
	{
		if (lower_alph == 'e' || lower_alph == 'q')
			lower_alph += 1;
		putchar(lower_alph);
		lower_alph++;
	}
	putchar('\n');
	return (0);
}
