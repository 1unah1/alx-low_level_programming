#include "main.h"
/**
 * times_table - Function prints 9X timetable starting from 0.
 *
 * Return: 0 (Success).
 */
void times_table(void)
{
	int r, c, rXc;

	for (r = 0; r <= 9; r++)
	{
		for (c = 0; c <= 9; c++)
		{
			rXc = c * r;

			if (rXc > 0 && rXc < 10)
			{
				_putchar(' ');
			}
			_putchar(rXc + '0');
			_putchar(',');
			_putchar('\t');
		}

		_putchar('\n');
			
}
