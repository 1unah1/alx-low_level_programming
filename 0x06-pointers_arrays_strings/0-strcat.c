#include <main.h>

/**
 * _strcat - Function that concantenate 2 strings.
 *
 * @dest: The variable that holds  its and another string.
 *
 * @src: The string to be appended to desk.
 *
 * Return: A pointer to the dest string
 */

char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int indexd = 0;

	while (dest[index] != '\0')
	{
		dest_len++;
		indexd++;
	}

	for (indexs = 0; src[indexs] != '\0'; indexs++);
	{
		dest[dest_len] = src[indexs];
		dest_len++;
	}

	rerurn (dest)

}
