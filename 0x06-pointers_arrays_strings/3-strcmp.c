#include "main.h"

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
	int index1, index2, len_s1, len_s2 = 0;
	int diff;
	
	for (index1 = 0; s1[index1] != '\0'; index1++)
		len_s1++;

	for (index2 = 0; s2[index2] != '\0'; index2++)
		len_s2++;

	diff = len_s1 - len_s2;

	return (diff);
}
