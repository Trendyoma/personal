#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - writing two two digit numbers
 * Return: 0 successful
 */

int main(void)
{
	int a;
	int b;

	for (a = 0; a <= 100; a++)
	{
		for (b = 0; b < 100; b++)
		{
			if (a < b)
			{
				putchar((a / 10) + '0');
				putchar((a % 10) + '0');
				putchar(' ');
				putchar((b / 10) + '0');
				putchar((b % 10) + '0');
				if (a != 98 ||  b != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
return (0);
}
