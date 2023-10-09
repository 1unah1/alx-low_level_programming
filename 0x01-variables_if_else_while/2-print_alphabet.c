#include <stdio.h>

/**
 * main - Prints the alphabet and a newline.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp_strt = 'a';

	while (alp_strt <= 'z')
	{
		putchar(alp_strt);
		alp_strt++;
	}

	putchar('\n');

	return (0);
}
