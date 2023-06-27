#include "main.h"
/**
 * rev_string - main entry point
 * @s: string
 * Return: 0 successful
 */

void rev_string(char *s)
{
	int a = 0;
	int b;
	char revers = s[0];

	while (s[a] != '\0')
		a++;
	for (b = 0; b < a; b++)
	{
		a--;
		revers = s[b];
		s[b] = s[a];
		s[a] = revers;
	}
}
