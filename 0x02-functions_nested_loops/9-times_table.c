#include "main.h"
/**
 * times_table - timetable of 9
 * Return : empty (zero)
 */

void times_table(void)
{
	int a, b, c;
		for (a = 0; a <= 9; a++)
		{
			for (b = 0; b <= 9; b++)
			{
				c = a * b;
			if  (b == 0)
			_putchar(c + '0');

			if (c < 10 && b != 0)
			{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(c + '0');
			}
			if (c >= 10 && b <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((c / 10) + '0');
				_putchar('0' + (c % 10));
			}
			}
			_putchar('\n');
		}
}
