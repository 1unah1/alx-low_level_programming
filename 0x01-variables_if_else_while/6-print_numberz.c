#include <stdio.h>

/**
 * main - Entry point
 * Description: 'Function to print, using putchar,
 * from 0 - 9 amd a mewline'
 * Return: Always 0 (success)
 */

int main(void)
{
	int x = 48;

	for (x = 45; x <= 57; x++)
	{
		putchar(x);
	}

	putchar('\n');
	return (0);
}
