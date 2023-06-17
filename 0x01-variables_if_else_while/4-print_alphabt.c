#include <stdio.h>
/**
 * main - omiting letters q and e
 * Return: 0 (successful)
 */

int main(void)
{
	char h;

	for (h = 'a'; h <= 'z'; h++)
	{
		if (h != 'q' && h != 'e')
			putchar(h);
	}
	putchar('\n');
	return (0);
}
