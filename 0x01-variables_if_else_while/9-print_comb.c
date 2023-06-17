#include <stdio.h>
/**
 * main - printing numbers with coma using int
 * Return: 0(successful)
 */

int main(void)
{
	int z;

	for (z = '0'; z <= '9'; z++)
	{
		putchar(z);
		putchar(',');
		putchar(' ');
	}
	if (z != '9')
	{
	putchar('\n');
	}
	return (0);
}
