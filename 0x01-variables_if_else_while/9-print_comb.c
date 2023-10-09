#include <stdio.h>

/**
 * main - prints all sinlge digit combo
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 48;

	for (; n <= 57; n++)
	{
		putchar(n);

		if (n < 57)
		{
			putchar(44);
			putchar(32);
		}
	}

	putchar(10);

	return (0);
}
