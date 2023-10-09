#include <stdio.h>

/**
 * main - prints lowercase alphabet except p and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alph_lower = 'a';
	char alph_upper = 'A';

	while (alph_lower <= 'z')
	{
		putchar(alph_lower);
		alph_lower++;
	}
	while (alph_upper <= 'Z')
	{
		putchar(alph_upper);
		alph_upper++;
	}

	putchar('\n');

	return (0);
}
