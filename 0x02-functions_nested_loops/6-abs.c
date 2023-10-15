#include "main.h"
/**
 * _abs - Comoutes and prints the absolutely value of a number
 *
 * @n: Int used for the argument ofbthe function
 *
 * Return: 0 (Success).
 */
int _abs(int n)
{
	if (n > 0 || n == 0)
	{
		return (n);
	}
	else
		return (n * -1);
}
