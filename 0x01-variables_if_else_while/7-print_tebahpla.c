#include <stdio.h>

/**
 * main - Prints reversed  alphabet and a newline.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp_rev = 'z';

	while (alp_rev >= 'a')
	{
		putchar(alp_rev);
		alp_rev--;
	}

	putchar('\n');

	return (0);
}
