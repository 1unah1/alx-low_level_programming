#include <main.h>

/**
 * reverse_array - function that reverses an integer array.
 *
 * @a: Array variable of type int to be reversed.
 *
 * @n: Representing the max elements in the array.
 */

void reverse_array(int *a, int n);
{
	int index, half_n;

	for (index = 0; index < n/2; index++)
	{
		half_n = a[index];
		a[index] = a[n - index - 1];
		a[n - index - 1] = temp;
	}

	for (index = 0; index < n; index++)
		_putchar(index + '0');
			
}

