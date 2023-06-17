#include <stdio.h>
/**
 * main - finding numbers of base 10 without printf
 * Return: 0 (successful)
 */

int main(void)
{
	char numb;

	for (numb = '0'; numb <= 9; numb++)
	{
		putchar('0' + numb);
	}
	putchar('\n');
	return (0);
}
