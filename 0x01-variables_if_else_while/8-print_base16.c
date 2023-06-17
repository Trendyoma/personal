#include <stdio.h>
/**
 * main - print numbers of hexadecimal thatnis base 16
 * Return: 0 (successful)
 */

int main(void)
{
	char num;
	char alph;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	for (alph = 'a'; alph < 'g'; alph++)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
