#include "main.h"

/**
 * swap_int - Function to swap the value of two integers
 *
 * @a: 1st int to be swapped
 *
 * @b: 2nd int to be swapped.
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
