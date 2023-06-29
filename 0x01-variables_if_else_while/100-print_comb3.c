#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print two numbers
 * Return: 0 successful
 */

int main(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 1; b <= 9; b++)
		{
			if (a < b && b > a)
			{
				putchar((a % 10) + '0');
				putchar((b % 10) + '0');
				if (a != 8 || b != 9)
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
