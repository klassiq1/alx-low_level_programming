#include "main.h"

/**
 *  * _islower - print the english alphabet 10x
 *
 *   *@c: The character in ASCII code
 *
 *    * Return: void.
 */

void _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
