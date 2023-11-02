#include "main.h"

/**
 * string_toupper - Function changes lower case alphabet to upper case.
 *
 * @c: The string to be changed.
 *
 * Return: Returns a the coverted characters.
 */

char *cap_string(char *c)
{
	int spc [] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	int spc_len = 23;
	int index_c = 0;
	int index_spc;
	
	for (c = 0; c[index_c] != 0; index_c++)
	{
		for (index_spc = 0; index_spc < spc_len; index_spc++)
			{
				if ((c[index_c] >= 'a' && c[index_c] <= 'z') && (index_c == 0 || (spc[index_spc - 1] == spc[index_c])))
					c[index_c] = c[index_c] - 32;
			}
	}

       return (c);		
}

