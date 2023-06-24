#include <stdio.h>
/**
 * main - main point of entry
 * a: numbers to be printed
 * Return: 0 success
 */

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 =0)
		{
			printf("Fizz");
		}
		if (a % 5 = 0)
		{
			printf("Buzz");
		}
		if (a % 15 = 0)
		{
			printf("FizzBuzz");
		}
		printf("%d ", a);
	}
	return (0);
}
