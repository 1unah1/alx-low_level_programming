#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints elements of an array and a newline
 * @a: pointer to array
 * @n: index of array to be oeinted 
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	n = 0;

	while (a[n] != '\0')
	{
		printf("%d, ", n);
		n++;
	}

	printf("\n");
}
