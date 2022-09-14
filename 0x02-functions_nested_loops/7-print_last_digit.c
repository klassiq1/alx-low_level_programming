#include "main.h"
/**
 * print_last_digit - print the last digit of the numbers
 ** @n: input number as an integer.
 * @n - as augument of the function
 *
 * Return : valve of the last digit
 * Return - return value of last digit of the numbers
 */

int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-1);
	}
	else
	{
		_putchar(l + 48);
		return (1);
	}
}
