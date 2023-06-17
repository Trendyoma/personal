#include <stdio.h>
/**
 * main - printing alphabet in reverse
 * Return: 0 (successful)
 */

int main(void)
{
	char revz;

	for (revz = 'z'; revz >= 'a'; revz--)
	{
		putchar(revz);
	}
	putchar('\n');
	return (0);
}
