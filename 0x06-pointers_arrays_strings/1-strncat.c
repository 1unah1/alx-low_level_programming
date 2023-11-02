#include <main.h>

/**
 * _strncat - Function that concantenate 2 strings.
 *
 * @dest: The variable that holds  its and another string.
 *
 * @src: The string to be appended to desk.
 *
 * @n: 
 *
 * Return: A pointer to the dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int indexd = 0;
	int indexs;

	while (dest[indexd] != '\0')
	{
		dest_len++;
		indexd++;
	}

	for (indexs = 0; src[indexs] && index < n; indexs++)
	{
		dest[indexd] = src[indexs];
		indexd++;
	}

	return (dest);

}
