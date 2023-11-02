#include <main.h>

/**
 * _strcmp - Function that compares two string and return their differnce .
 *
 * @s1: The 1st string to be compute.
 *
 * @s2: The 2nd string to compute.
 *
 * Return: A pointer to the dest string
 */

int _strcmp(char *s1, char *s2)
{
	int index, len_s1, len_s2 = 0;
	int diff;

	while (s1[index])
	{
		len_s1++;
		index++;
	}
	index = 0;

	while (s2[index])
	{
		len_s2++;
		index++;
	}
	
	diff = len_s1 - len_s2;

	return (diff);
}
