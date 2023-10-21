#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints elements of an array and a newline
 * @a: pointer to array
 * @n: index of array to be printed
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	n = 0;
	int c = 0;

	while (a[n] != '\0')
	{
		c += 1;
		n++;
	}
	printf("%d, ", n);
	printf("\n");
}
