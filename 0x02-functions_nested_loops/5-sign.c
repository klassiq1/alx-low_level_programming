#include "main.h"

/**
 * print_sign - Determines if the input number
 *
 * * @n: The input number as an integer.
 *
 * Return: 1 is greater than zero. 0 is zero.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

