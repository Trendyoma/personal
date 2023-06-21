#include "main.h"
/**
 * print_last_digit - printing the last digit
 * @j: character to wrok with
 * Return: value of the last digit of the number
 */

int print_last_digit(int j)
{
	int last_digit;

	last_digit = j % 10
		if (last_digit < 0)
		{
			last_digit = last_digit * -1;
		}
	_putchar(last_digit + '0');
	return (last_digit);
}
