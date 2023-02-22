#include "main.h"

/**
 * print last digit - function that prints last digit
 *
 * @n: function parameter
 *
 * Return: value of the last digit of number
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (n < 0)
	{
	last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
