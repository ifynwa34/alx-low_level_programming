#include "main.h"

/**
 * print-last_digit - this prints the last digit of a number
 * @n: the number to be treated
 * Return: last digit of the number
 */

int print_last_digit(int n)

{
	int last;

	last = n % 10;
	if (last < '0')
	{
	last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
