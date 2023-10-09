#include <stdio.h>

/**
 * main - prints lowercase base 18 digits & \n.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char num1 = '0';
	char chr = 'a';

	for (num1 = '0';  num1 <= '9'; num1++)
	{
		putchar(num1);
	}
	for (chr = 'a'; chr <= 'f'; chr++)
	{
		putchar(chr);
	}

	putchar('\n');

	return (0);
}
