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
	int c;
	n = 0;

	while (a[n] != '\0')
	{
		printf("%i, ", a[n]);
		n++;
	}
	printf("\n");
}
