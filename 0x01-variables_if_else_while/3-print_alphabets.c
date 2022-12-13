#include <stdio.h>

/**
 * main - Entry point
 * Description: 'Write to std output, the alphabet in
 * lower case and then in caps, followed by a new line.
 * Return: Always 0 (success)
 */
int main(void)
{
int lower_alph = 'a';
int caps_alph = 'A';

while (lower_alph <= 'z')
{
	putchar(lower_alph);
	lower_alph++;
}
while (caps_alph <= 'Z')
{
	putchar(caps_alph);
	caps_alph++;
}
putchar('\n');
return (0);
}
