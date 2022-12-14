#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: 'prints is -tive, is 0 or +tive \
 * if the number is less than 0, equals 0 or
 * is greater than 0 respectively'
 * Return: Always 0 (success)
 */
int main(void)
{
	intn;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive", n);
	else if (n == 0)
		printf("%d is 0", n);
	else
		(n < 0)
		printf("%d is negative", n);

	return (0);
}
