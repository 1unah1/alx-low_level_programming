#include <stdio.h>

/**
 * main - Prints the alphabet without q and e.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp_strt = 'a';
	while (alp_strt <= 'z')
	{
		if (alp_strt != 'p' || alp_strt != 'e')
		{
		putchar(alp_strt);
		alp_strt++;
		}
	}

	putchar('\n');

	return (0);
}
