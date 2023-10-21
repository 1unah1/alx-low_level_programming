#include "main.h"

/**
 * _strlen - Function that returns the lenght of a string.
 * @s: varable of type char which lenght is to be calculate.
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int count = 0;
	int n;

	for (n = 0; s[n] != '\0'; n++)
	{
		count++;
	}

	return (count);
}
