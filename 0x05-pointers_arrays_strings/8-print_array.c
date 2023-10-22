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
	i = 0;

	while (a[i] < n)
	{
		printf("%i", a[n]);

		if ( i < n - 1)
		{
			printf(", ");
		}

		n++;
	}
	printf("\n");
}
