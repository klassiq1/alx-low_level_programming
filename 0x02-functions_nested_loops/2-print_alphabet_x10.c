#include "main.h"

/**
 *  * print_alphabet_x10 - print the english alphabet 10x
 *
 *   *
 *
 *    * Return: void.
 */

void print_alphabet_x10(void)
{
	int i, c;

	for (i = 0; i <= 9; i++)

	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
