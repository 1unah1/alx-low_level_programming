#include <main.h>

/**
 * string_toupper - Function changes lower case alphabet to upper case.
 *
 * @str: The string to be changed.
 *
 * Return: Returns a the coverted characters.
 */

char *string_toupper(char *to_up)
{
       char to_up;
       int index = 0;

       for (index = 0; to_up[index] != '\0'; index++)
       {
	       if (to_up[index] >= 'a' && to_up[index] <= 'z')
		       to_up[index] -= 32;
       }

       return (to_up);
			
}

