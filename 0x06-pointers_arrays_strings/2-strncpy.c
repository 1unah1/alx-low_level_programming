#include "main.h"

/**
 * _strncpy - Function that copies a string.
 *
 * @dest: The deetination string to hold n characters
 *
 * @src: The source str8ng from which n number of chars is copied
 *
 * @n: The amount of chars to be copied.
 *
 * Return: A pointer to the dest string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int indexd;
	int indexs;

	for (indexs = 0; src[indexs] != '\0'  && indexs < n; indexs++)
	{
		indexd = 0;

		while (dest[indexd] != '\0')
		{
			dest[indexd] = src[indexs];
			indexd++;
		}
	}

	return (dest);
}
