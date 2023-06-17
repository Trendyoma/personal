#include <stdio.h>
/**
 * main - finding numbers of base 10 without printf
 * Return: 0 (successful)
 */

int main(void)
{
	int numb;

	for (numb = 0; numb <= 9; numb++)
	{
		putchar((numb % 10) + '0');
	}
	putchar('\n');
	return (0);
}
