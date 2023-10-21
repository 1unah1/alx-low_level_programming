#include "main.h"

/**
 * rev_string - Reverse a string.
 * @s: string to be reserved.
 */
void rev_string(char *s)
{
	int i = 0, lc = 0;
	char tmp;

	while (s[i++])
		lc++;

	for (i = lc - 1; i >= lc / 2; i--)
	{
		tmp = s[i];
		s[i] = s[lc - i - 1];
		s[lc - i - 1] = tmp;
	}
}
