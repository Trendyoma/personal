#include <stdio.h>
/**
 * main - lowercase and uppercase alphabet
 * Return: 0 (successful)
 */

int main(void)
{
	char bet;
	char upbet;

	for (bet = 'a'; bet <= 'z'; bet++)
	{
		putchar(bet);
	}
	for (upbet = 'A'; upbet <= 'Z'; upbet++)
	{
		putchar(upbet);
	}
	putchar('\n');
return (0);
}
